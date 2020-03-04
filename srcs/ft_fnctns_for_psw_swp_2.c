/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fnctns_for_psw_swp_2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 21:41:39 by u18188899         #+#    #+#             */
/*   Updated: 2020/03/04 21:42:51 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* ************************************************************************** */
t_lst_psh_swp_1			*ft_do_markup(t_lst_psh_swp_1 *stck)
{
	t_rlst_markup			mode_grtr;
	t_rlst_markup			mode_indx;

	mode_grtr.lst = stck;
	mode_indx.lst = stck;
	mode_grtr = ft_do_mode_grtr(mode_grtr);
	mode_indx.elmnts_in_a = 1;
	mode_indx.head = mode_indx.lst->elmnt.indx;
	mode_indx = ft_do_mode_indx(mode_indx);
	stck = (mode_indx.elmnts_in_a >= mode_grtr.elmnts_in_a ?
		ft_mark_in_indx_md(stck, mode_indx.head) :
		ft_mark_in_grtr_md(stck, mode_grtr.head));
	return (stck);
}

/* ************************************************************************** */
int						ft_is_stack_clear(t_lst_psh_swp_1 *stck)
{
	while (stck)
	{
		if (stck->elmnt.rslt != 0)
			return (0);
		stck = stck->next;
	}
	return (1);
}
