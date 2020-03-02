/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 18:20:59 by u18188899         #+#    #+#             */
/*   Updated: 2020/03/02 22:49:44 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
			if (ft_strcmp(av[itrtr1],av[itrtr2++])>0)
				indx++;
		itrtr1++;
		stck->elmnt.indx = indx;
		stck = stck->next;
	}
	return (stck);
}

/* ************************************************************************** */
t_rlst_markup			ft_do_mode_grtr(t_rlst_markup mode_grtr)
{
	t_rlst_markup			prvs;
	t_rlst_markup			rslt;

	if (!mode_grtr.lst->next)
	{
		mode_grtr.head = mode_grtr.lst->elmnt.indx;
		mode_grtr.elmnts_in_a = 1;
		mode_grtr.lst->elmnt.rslt = 1;
		return (mode_grtr);
	}
	prvs = mode_grtr;
	prvs.lst = prvs.lst->next;
	rslt = ft_do_mode_grtr(prvs);
	if (mode_grtr.lst->elmnt.nmbr < rslt.lst->elmnt.nmbr)
	{
		mode_grtr.lst->elmnt.rslt = rslt.lst->elmnt.rslt + 1;
		if (mode_grtr.lst->elmnt.rslt > rslt.elmnts_in_a || (
			mode_grtr.lst->elmnt.rslt == rslt.elmnts_in_a &&
			mode_grtr.lst->elmnt.indx < rslt.lst->elmnt.indx))
		{
			mode_grtr.head = mode_grtr.lst->elmnt.indx;
			mode_grtr.elmnts_in_a = rslt.elmnts_in_a + 1;
		}
		else
		{
			mode_grtr.elmnts_in_a = rslt.elmnts_in_a;
			mode_grtr.head = rslt.head;
		}
	}
	else
	{
		mode_grtr.lst->elmnt.rslt = 1;
		mode_grtr.elmnts_in_a = rslt.elmnts_in_a;
		mode_grtr.head = rslt.head;
	}
	return (mode_grtr);
}

/* ************************************************************************** */
t_rlst_markup			ft_do_mode_indx(t_rlst_markup mode_indx)
{
	t_rlst_markup			tmp1;
	int						tmp2;

	tmp1 = mode_indx;
	tmp2 = mode_indx.lst->elmnt.indx;
	mode_indx.lst->elmnt.rslt = 1;
	if (!mode_indx.lst)
		return (mode_indx);
	while (tmp1.lst)
	{
		if (tmp1.lst->elmnt.indx == tmp2 + 1 && tmp2++)
			(mode_indx.lst->elmnt.rslt)++;
		tmp1.lst = tmp1.lst->next;
	}
	if (mode_indx.lst->elmnt.rslt > mode_indx.elmnts_in_a || (
		mode_indx.lst->elmnt.rslt == mode_indx.elmnts_in_a &&
		mode_indx.lst->elmnt.indx < mode_indx.head))
	{
		mode_indx.head = mode_indx.lst->elmnt.indx;
		mode_indx.elmnts_in_a = mode_indx.lst->elmnt.rslt;
	}
	mode_indx.lst = mode_indx.lst->next;
	return (ft_do_mode_indx(mode_indx));
}

/* ************************************************************************** */
t_lst_psh_swp_1			*ft_mark_in_indx_md(t_lst_psh_swp_1 *stck, int hd_indx)
{
	t_lst_psh_swp_1			*tmp1;

	tmp1 = stck;
	while (tmp1)
	{
		if (tmp1->elmnt.indx == hd_indx && hd_indx++)
			tmp1->elmnt.rslt = 1;
		tmp1 = tmp1->next;		
	}
	return (stck);		
}

/* ************************************************************************** */
t_lst_psh_swp_1			*ft_mark_in_indx_md(t_lst_psh_swp_1 *stck, int hd_indx)
{
	t_lst_psh_swp_1			*tmp1;

	tmp1 = stck;
	while (tmp1)
	{
		if (tmp1->elmnt.indx == hd_indx && hd_indx++)
			tmp1->elmnt.rslt = 1;
		tmp1 = tmp1->next;		
	}
	return (stck);	
}

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
	stck = (mode_indx.elmnts_in_a > mode_grtr.elmnts_in_a ?
		ft_mark_in_indx_md(stck, mode_indx.head) :
		ft_mark_in_grtr_md(stck, mode_grtr.head));
	return (stck);
}

/* ************************************************************************** */
int						main(int ac, char **av)
{
	t_2_stcks_1				stcks;

	if (ft_is_dplcts(ac, av))
		ft_error_1();
	stcks = ft_gt_stcks_1(ac, av);
	if (ac < 5)
		return (ft_sort_3_elmnts());
	else if (ac < 7)
		return (ft_sort_5_elmnts());
	stcks.a = ft_clct_indxs(ac, av, stcks.a);
	stcks.a = ft_do_markup(stcks.a);
	ft_free_1(stcks.a,stcks.b);
	return (0);
}
