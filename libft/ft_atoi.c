/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <klekisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:05:14 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/14 12:05:15 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int		i1;
	int		sign;
	size_t	i2;

	i2 = 0;
	i1 = 0;
	sign = 1;
	while (ft_isspace(str[i2]) != 0)
		i2++;
	if (str[i2] == '-')
	{
		sign = -1;
		i2++;
	}
	if (str[i2] == '+' && sign == 1)
		i2++;
	while (str[i2] >= '0' && str[i2] <= '9')
	{
		if (i1 > 0 && i1 > (i1 * 10 + sign * (str[i2] - '0')))
			return (-1);
		if (i1 < 0 && i1 < (i1 * 10 + sign * (str[i2] - '0')))
			return (0);
		i1 = i1 * 10 + sign * (str[i2++] - '0');
	}
	return (i1);
}
