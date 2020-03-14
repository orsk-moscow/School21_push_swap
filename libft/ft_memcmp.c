/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <klekisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:07:04 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/14 12:07:05 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i1;
	unsigned char	*ps1;
	unsigned char	*ps2;

	i1 = 0;
	ps1 = (unsigned char*)s1;
	ps2 = (unsigned char*)s2;
	if (ps1 == NULL && ps2 == NULL)
	{
		return (0);
	}
	while (i1 < n)
	{
		if (*(ps1 + i1) != *(ps2 + i1))
		{
			return (*(ps1 + i1) - *(ps2 + i1));
		}
		i1++;
	}
	return (0);
}
