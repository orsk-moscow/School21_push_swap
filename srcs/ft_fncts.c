/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fncts.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:44:31 by u18188899         #+#    #+#             */
/*   Updated: 2020/03/05 16:06:30 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
void					ft_free(t_list *stck_a, t_list *stck_b)
{
	if (stck_a)
		ft_lstdel(&stck_a, ft_del); // here smth wrong - exception
	if (stck_b)	
		ft_lstdel(&stck_b, ft_del);
}

void					ft_free_1(t_lst_psh_swp_1 *stck_a, t_lst_psh_swp_1 *stck_b)
{
	if (stck_a)
		ft_lstdel_1(&stck_a, ft_del_1); // here smth wrong - exception
	if (stck_b)	
		ft_lstdel_1(&stck_b, ft_del_1);
}
