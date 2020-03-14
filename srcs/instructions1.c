/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <klekisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:10:05 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/14 12:10:06 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_2_stcks				do_sb(t_2_stcks stcks)
{
	size_t					len;
	void					*tmp1;
	void					*tmp2;

	len = ft_lstlen(stcks.b);
	if (len <= 1)
		return (stcks);
	tmp1 = stcks.b->content;
	tmp2 = stcks.b->nxt->content;
	stcks.b->content = tmp2;
	stcks.b->nxt->content = tmp1;
	return (stcks);
}

t_2_stcks				do_ss(t_2_stcks stcks)
{
	stcks = do_sa(stcks);
	stcks = do_sb(stcks);
	return (stcks);
}

t_2_stcks				do_pa(t_2_stcks stcks)
{
	size_t					len;
	t_list					*tmp1;

	len = ft_lstlen(stcks.b);
	if (len < 1)
		return (stcks);
	tmp1 = stcks.b;
	stcks.b = stcks.b->nxt;
	tmp1->nxt = stcks.a;
	stcks.a = tmp1;
	return (stcks);
}

t_2_stcks				do_pb(t_2_stcks stcks)
{
	size_t					len;
	t_list					*tmp1;

	len = ft_lstlen(stcks.a);
	if (len < 1)
		return (stcks);
	tmp1 = stcks.a;
	stcks.a = stcks.a->nxt;
	tmp1->nxt = stcks.b;
	stcks.b = tmp1;
	return (stcks);
}

t_2_stcks				ra(t_2_stcks stcks)
{
	size_t					len;
	t_list					*tmp1;
	t_list					*tmp2;

	len = ft_lstlen(stcks.a);
	if (len < 2)
		return (stcks);
	tmp1 = stcks.a;
	stcks.a = stcks.a->nxt;
	tmp2 = stcks.a;
	tmp1->nxt = NULL;
	while (tmp2->nxt)
		tmp2 = tmp2->nxt;
	tmp2->nxt = tmp1;
	return (stcks);
}
