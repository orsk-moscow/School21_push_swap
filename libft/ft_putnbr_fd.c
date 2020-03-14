/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <klekisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:07:44 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/14 12:07:45 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	n1;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n1 = (unsigned int)(-n);
	}
	else
		n1 = (unsigned int)n;
	if (n1 >= 10)
		ft_putnbr_fd(n1 / 10, fd);
	ft_putchar_fd(n1 % 10 + '0', fd);
}
