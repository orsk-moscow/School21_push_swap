/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 16:53:04 by u18188899         #+#    #+#             */
/*   Updated: 2020/02/24 09:25:24 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int						ft_chck_arg(int intgr, const char *strng)
{
	return (ft_strcmp(ft_itoa(intgr),strng));
}

void					ft_del(void *content, size_t content_size)
{

	// DO NOT DELETE 3 STRINGS BELOW
	// free(content);
	// ft_memdel(&content);
	// content_size = 0;
	return ;
}

void					ft_error(t_list *stck_a,t_list *stck_b)
{
	
	if (stck_a)
		ft_lstdel(&stck_a, ft_del); // here smth wrong - exception
	if (stck_b)	
		ft_lstdel(&stck_b, ft_del);
	ft_putstr_fd("Error\n",(int)STDERR_FILENO);
	exit (-1);
}
