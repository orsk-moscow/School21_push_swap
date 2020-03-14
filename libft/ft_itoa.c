/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <klekisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:06:27 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/14 12:06:28 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_get_depth(int n)
{
	unsigned int	i1;
	unsigned int	t1;

	if (n < 0)
		i1 = 2;
	else
		i1 = 1;
	t1 = ft_abs(n);
	while (t1 > 9)
	{
		t1 = t1 / 10;
		i1++;
	}
	return (i1);
}

char				*ft_itoa(int n)
{
	char			*fresh;
	unsigned int	i1;
	unsigned int	t1;

	fresh = (char*)malloc(sizeof(char) * (ft_get_depth(n) + 1));
	if (!fresh)
		return (NULL);
	t1 = ft_abs(n);
	i1 = ft_get_depth(n);
	fresh[i1] = '\0';
	while (t1 > 9)
	{
		fresh[--i1] = t1 % 10 + '0';
		t1 = t1 / 10;
	}
	fresh[--i1] = t1 + '0';
	if (n < 0)
		fresh[--i1] = '-';
	return (fresh);
}
