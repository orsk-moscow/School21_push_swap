/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fnctns_for_psw_swp_2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <klekisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:09:53 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/14 12:09:53 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stcks					*do_markup(t_stcks *stcks)
{
	t_res_mrkp				*md_grtr;
	t_res_mrkp				*md_ind;

	md_grtr = stcks->a;
	md_ind = stcks->a;
	md_grtr = do_md_grtr(md_grtr->lst, 0, 0);
	md_ind->els_n = 1;
	md_ind->hd = md_ind->lst->el.ind;
	md_ind = do_md_ind(md_ind->lst, 0, 0);
	stcks->a = (md_ind->els_n >= md_grtr->els_n ?
		ft_mark_in_ind_md(stcks->a, md_ind) :
		ft_mark_in_grtr_md(stcks->a, md_grtr));
	stcks->b = ft_init_stck();
	return (stcks);
}

int						ft_is_stack_clear(t_lst_p_s *stck)
{
	while (stck)
	{
		if (stck->el.res != 1)
			return (0);
		stck = stck->nxt;
	}
	return (1);
}

t_stcks					*rb_n_s(t_stcks *stcks, int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		stcks = rb_1_s(stcks);
	return (stcks);
}

t_stcks					*ra_n_s(t_stcks *stcks, int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		stcks = ra_1_s(stcks);
	return (stcks);
}

int						ft_clt_stps_a(t_lst_p_s *srtd_stck, int num)
{
	int						t1;
	int						t2;
	t_lst_p_s				*t3;

	t2 = 0;
	t3 = srtd_stck;
	while (t3)
	{
		t1 = t3->el.num;
		t3 = t3->nxt;
		t2++;
		if (t3 && ((t3->el.num > num && num > t1 && t3->el.num > t1) || (
			t3->el.num > num && num < t1 && t3->el.num < t1) || (
			t3->el.num < num && num > t1 && t3->el.num < t1)))
			break ;
	}
	return (t2);
}
