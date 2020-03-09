/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fnctns_for_psw_swp_2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 21:41:39 by u18188899         #+#    #+#             */
/*   Updated: 2020/03/09 14:57:13 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* ************************************************************************** */
t_rlst_markup			*ft_do_markup(t_rlst_markup *stck)
{
	t_rlst_markup			*mode_grtr;
	t_rlst_markup			*mode_indx;

	mode_grtr = stck;
	mode_indx = stck;
	mode_grtr = ft_do_mode_grtr(mode_grtr->lst,0,0);
	mode_indx->elmnts_in = 1;
	mode_indx->head = mode_indx->lst->elmnt.indx;
	mode_indx = ft_do_mode_indx(mode_indx->lst,0,0);
	stck = (mode_indx->elmnts_in >= mode_grtr->elmnts_in ?
		ft_mark_in_indx_md(stck, mode_indx) :
		ft_mark_in_grtr_md(stck, mode_grtr));
	return (stck);
}

/* ************************************************************************** */
int						ft_is_stack_clear(t_lst_psh_swp_1 *stck)
{
	while (stck)
	{
		if (stck->elmnt.rslt != 1)
			return (0);
		stck = stck->next;
	}
	return (1);
}
