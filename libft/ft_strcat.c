/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <klekisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:07:57 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/14 12:07:58 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i1;

	i1 = 0;
	while (s1[i1])
	{
		i1++;
	}
	while (*s2)
	{
		s1[i1] = *s2;
		i1++;
		s2++;
	}
	s1[i1] = '\0';
	return (s1);
}
