/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fncts.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <klekisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:09:55 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/14 12:09:56 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void					ft_free(t_list *stck_a, t_list *stck_b)
{
	if (stck_a)
		ft_lstdel(&stck_a, ft_del);
	if (stck_b)
		ft_lstdel(&stck_b, ft_del);
}

int						ft_r_vs_rr(int ind, int elmts)
{
	return ((ind > elmts / 2) ?
			elmts - ind :
			ind);
}

int						ft_r_vs_rr_2(int ind, int elmts)
{
	int						rr;
	int						r;

	rr = 1;
	r = 0;
	return ((ind > elmts / 2) ?
			rr :
			r);
}

void					ft_prnt(int tmp2, int els_b, int tmp4, int tmp5)
{
	if (tmp2 && els_b)
		ft_prnt_rrr_n(tmp4, tmp5);
	else if (!tmp2 && !els_b)
		ft_prnt_rr_n(tmp4, tmp5);
	else
	{
		tmp2 ? ft_prnt_rrb_n(tmp4) : ft_prnt_rb_n(tmp4);
		els_b ? ft_prnt_rra_n(tmp5) : ft_prnt_ra_n(tmp5);
	}
}
