/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:09:46 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/18 10:57:22 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int						ft_chck_arg(int intgr, const char *strng)
{
	char				*s;
	int					res;

	s = ft_itoa(intgr);
	res = ft_strcmp(s, strng);
	free(s);
	return (res);
}

void					ft_del(void *content, size_t content_size)
{
	content++;
	content--;
	content_size++;
	content_size--;
	return ;
}

int						ft_error(void)
{
	ft_putstr_fd("Error\n", (int)STDERR_FILENO);
	exit(-1);
	return (1);
}

int						ft_is_dplcts(int ac, char **av)
{
	int						itrtr1;
	int						itrtr2;

	itrtr1 = 1;
	while (itrtr1 < ac)
	{
		itrtr2 = itrtr1 + 1;
		while (itrtr2 < ac)
			if (!ft_strcmp(av[itrtr2++], av[itrtr1]))
				return (1);
		itrtr1++;
	}
	return (0);
}

int						ft_error_1(void)
{
	ft_putstr_fd("Error\n", (int)STDERR_FILENO);
	exit(-1);
	return (1);
}
