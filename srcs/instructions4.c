/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <klekisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:10:12 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/14 12:10:13 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

size_t					ft_lstlen_1(t_lst_p_s *lst)
{
	size_t					sz;

	sz = 0;
	while (lst)
	{
		sz++;
		lst = lst->nxt;
	}
	return (sz);
}

t_stcks					*do_sa_1(t_stcks *stcks)
{
	size_t					len_a;
	t_num_ind_res			tmp1;
	t_num_ind_res			tmp2;

	len_a = ft_lstlen_1(stcks->a->lst);
	if (len_a <= 1)
		return (stcks);
	tmp1 = stcks->a->lst->el;
	tmp2 = stcks->a->lst->nxt->el;
	stcks->a->lst->el = tmp2;
	stcks->a->lst->nxt->el = tmp1;
	ft_putstr_fd("sa\n", (int)STDOUT_FILENO);
	return (stcks);
}

void					ft_prnt_rrb_n(int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		ft_putstr("rrb\n");
}

void					ft_prnt_rrr_n(int nb, int na)
{
	int						itrtr1;
	int						min_n;
	int						max_n;

	itrtr1 = 0;
	min_n = (na > nb ? nb : na);
	max_n = (na > nb ? na : nb);
	while (itrtr1 < min_n)
	{
		ft_putstr("rrr\n");
		itrtr1++;
	}
	while (itrtr1 < max_n)
	{
		na < max_n ? ft_putstr("rrb\n") : ft_putstr("rra\n");
		itrtr1++;
	}
}
