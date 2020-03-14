/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <klekisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:09:13 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/14 12:09:14 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *temp;

	temp = s;
	while (*s)
		s++;
	if (*s == (char)c)
		return ((char*)s);
	while (s != temp && *s != (char)c)
	{
		s--;
	}
	if (*s == (char)c)
		return ((char*)s);
	return (NULL);
}
