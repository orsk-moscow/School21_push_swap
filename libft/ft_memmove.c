/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <klekisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:07:15 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/14 12:07:15 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *pd;
	unsigned char *ps;

	pd = (unsigned char *)dst;
	ps = (unsigned char *)src;
	if (pd == ps)
		return (dst);
	if (pd < ps)
	{
		ft_memcpy(pd, ps, len);
		return (dst);
	}
	while (len > 0)
	{
		*(pd + len - 1) = *(ps + len - 1);
		len--;
	}
	return (dst);
}
