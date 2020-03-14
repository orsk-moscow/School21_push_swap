/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions5.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <klekisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:10:15 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/14 12:10:15 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stcks					*do_pa_1(t_stcks *stcks)
{
	size_t					len;
	t_lst_p_s				*tmp1;

	len = ft_lstlen_1(stcks->b->lst);
	if (len < 1)
		return (stcks);
	tmp1 = stcks->b->lst;
	stcks->b->lst = stcks->b->lst->nxt;
	tmp1->nxt = stcks->a->lst;
	stcks->a->lst = tmp1;
	ft_putstr_fd("pa\n", (int)STDOUT_FILENO);
	return (stcks);
}

t_stcks					*do_pb_1(t_stcks *stcks)
{
	size_t					len;
	t_lst_p_s				*tmp1;

	len = ft_lstlen_1(stcks->a->lst);
	if (len < 1)
		return (stcks);
	tmp1 = stcks->a->lst;
	stcks->a->lst = stcks->a->lst->nxt;
	tmp1->nxt = stcks->b->lst;
	stcks->b->lst = tmp1;
	ft_putstr_fd("pb\n", (int)STDOUT_FILENO);
	return (stcks);
}

t_stcks					*ra_1_s(t_stcks *stcks)
{
	size_t					len;
	t_lst_p_s				*tmp1;
	t_lst_p_s				*tmp2;

	len = ft_lstlen_1(stcks->a->lst);
	if (len < 2)
		return (stcks);
	tmp1 = stcks->a->lst;
	stcks->a->lst = stcks->a->lst->nxt;
	tmp2 = stcks->a->lst;
	tmp1->nxt = NULL;
	while (tmp2->nxt)
		tmp2 = tmp2->nxt;
	tmp2->nxt = tmp1;
	return (stcks);
}

t_stcks					*ra_1(t_stcks *stcks)
{
	size_t					len;
	t_lst_p_s				*tmp1;
	t_lst_p_s				*tmp2;

	len = ft_lstlen_1(stcks->a->lst);
	if (len < 2)
		return (stcks);
	tmp1 = stcks->a->lst;
	stcks->a->lst = stcks->a->lst->nxt;
	tmp2 = stcks->a->lst;
	tmp1->nxt = NULL;
	while (tmp2->nxt)
		tmp2 = tmp2->nxt;
	tmp2->nxt = tmp1;
	ft_putstr_fd("ra\n", (int)STDOUT_FILENO);
	return (stcks);
}

t_res_mrkp				*ft_init_md_ind(int els_n, int hd)
{
	t_res_mrkp				*tmp1;

	if (!(tmp1 = (t_res_mrkp*)malloc(sizeof(t_res_mrkp*))))
		ft_error_1();
	tmp1->els_n = els_n;
	tmp1->hd = hd;
	tmp1->lst = NULL;
	return (tmp1);
}
