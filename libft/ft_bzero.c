/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <klekisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:05:18 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/14 12:05:19 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i1;
	unsigned char	*ps;

	i1 = 0;
	ps = (unsigned char*)s;
	if (n == 0)
	{
		return ;
	}
	while (i1 < n)
	{
		*ps = '\0';
		i1++;
		ps++;
	}
}
