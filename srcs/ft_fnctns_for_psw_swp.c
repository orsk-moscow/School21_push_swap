/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fnctns_for_psw_swp.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 21:37:26 by u18188899         #+#    #+#             */
/*   Updated: 2020/03/09 09:06:24 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* ************************************************************************** */
t_lst_psh_swp_1			*ft_clct_indxs(int ac, char **av, t_lst_psh_swp_1 *stck)
{
	int						itrtr1;
	int						itrtr2;
	int						indx;

	itrtr1 = 1;
	while (itrtr1 < ac)
	{
		indx = 0;
		itrtr2 = 1;
		while (itrtr2 < ac)
			if (ft_strcmp(av[itrtr1], av[itrtr2++]) > 0)
				indx++;
		itrtr1++;
		stck->elmnt.indx = indx;
		stck = stck->next;
	}
	return (stck);
}

/* ************************************************************************** */
t_rlst_markup			*ft_do_mode_grtr(t_rlst_markup *mode_grtr)
{
	t_rlst_markup			*prvs;
	t_rlst_markup			*rslt;

	if (!mode_grtr->lst->next)
	{
		mode_grtr->head = mode_grtr->lst->elmnt.indx;
		mode_grtr->elmnts_in_a = 1;
		mode_grtr->lst->elmnt.rslt = 1;
		return (mode_grtr);
	}
	prvs = mode_grtr;
	prvs->lst = prvs->lst->next;
	rslt = ft_do_mode_grtr(prvs);
	if (mode_grtr->lst->elmnt.nmbr < rslt->lst->elmnt.nmbr)
	{
		mode_grtr->lst->elmnt.rslt = rslt->lst->elmnt.rslt + 1;
		if (mode_grtr->lst->elmnt.rslt > rslt->elmnts_in_a || (
			mode_grtr->lst->elmnt.rslt == rslt->elmnts_in_a &&
			mode_grtr->lst->elmnt.indx < rslt->lst->elmnt.indx))
		{
			mode_grtr->head = mode_grtr->lst->elmnt.indx;
			mode_grtr->elmnts_in_a = rslt->elmnts_in_a + 1;
		}
		else
		{
			mode_grtr->elmnts_in_a = rslt->elmnts_in_a;
			mode_grtr->head = rslt->head;
		}
	}
	else
	{
		mode_grtr->lst->elmnt.rslt = 1;
		mode_grtr->elmnts_in_a = rslt->elmnts_in_a;
		mode_grtr->head = rslt->head;
	}
	return (mode_grtr);
}

/* ************************************************************************** */
t_rlst_markup			*ft_do_mode_indx(t_rlst_markup *mode_indx)
{
	t_rlst_markup			*tmp1;
	int						tmp2;

	tmp1 = mode_indx;
	tmp2 = mode_indx->lst->elmnt.indx;
	mode_indx->lst->elmnt.rslt = 1;
	if (!mode_indx->lst)
		return (mode_indx);
	while (tmp1->lst)
	{
		if (tmp1->lst->elmnt.indx == tmp2 + 1 && tmp2++)
			(mode_indx->lst->elmnt.rslt)++;
		tmp1->lst = tmp1->lst->next;
	}
	if (mode_indx->lst->elmnt.rslt > mode_indx->elmnts_in_a || (
		mode_indx->lst->elmnt.rslt == mode_indx->elmnts_in_a &&
		mode_indx->lst->elmnt.indx < mode_indx->head))
	{
		mode_indx->head = mode_indx->lst->elmnt.indx;
		mode_indx->elmnts_in_a = mode_indx->lst->elmnt.rslt;
	}
	mode_indx->lst = mode_indx->lst->next;
	return (ft_do_mode_indx(mode_indx));
}

/* ************************************************************************** */
t_rlst_markup			*ft_mark_in_indx_md(t_rlst_markup *stck, t_rlst_markup *indx)
{
	t_rlst_markup			*tmp1;

	tmp1 = stck;
	while (tmp1->lst)
	{
		if (tmp1->lst->elmnt.indx == indx->head && ++indx->head)
			tmp1->lst->elmnt.rslt = 1;
		else
			tmp1->lst->elmnt.rslt = 0;
		tmp1->lst = tmp1->lst->next;
	}
	stck->head = indx->head;
	stck->elmnts_in_a = indx->elmnts_in_a;
	stck->mode = "indx";
	return (stck);
}

/* ************************************************************************** */
t_rlst_markup			*ft_mark_in_grtr_md(t_rlst_markup *stck, t_rlst_markup *grtr)
{
	t_lst_psh_swp_1			*tmp1;
	int						tmp2;

	tmp1 = stck->lst;
	while (tmp1 && tmp1->elmnt.indx != grtr->head)
		tmp1 = tmp1->next;
	tmp2 = tmp1->elmnt.nmbr;
	tmp1->elmnt.rslt = 1;
	while (tmp1)
	{
		if (tmp2 < tmp1->elmnt.nmbr)
		{
			tmp2 = tmp1->elmnt.nmbr;
			tmp1->elmnt.rslt = 1;
		}
		else
			tmp1->elmnt.rslt = 0;
		tmp1 = tmp1->next;
	}
	stck->head = grtr->head;
	stck->elmnts_in_a = grtr->elmnts_in_a;
	stck->mode = "grtr";
	return (stck);
}

