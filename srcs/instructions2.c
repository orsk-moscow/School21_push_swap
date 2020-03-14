/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <klekisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:10:07 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/14 12:10:08 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_2_stcks				rb(t_2_stcks stcks)
{
	size_t					len;
	t_list					*tmp1;
	t_list					*tmp2;

	len = ft_lstlen(stcks.b);
	if (len < 2)
		return (stcks);
	tmp1 = stcks.b;
	stcks.b = stcks.b->nxt;
	tmp2 = stcks.b;
	tmp1->nxt = NULL;
	while (tmp2->nxt)
		tmp2 = tmp2->nxt;
	tmp2->nxt = tmp1;
	return (stcks);
}

t_2_stcks				rr(t_2_stcks stcks)
{
	stcks = ra(stcks);
	stcks = rb(stcks);
	return (stcks);
}

t_2_stcks				rra(t_2_stcks stcks)
{
	size_t					len;
	t_list					*tmp1;
	t_list					*tmp2;

	len = ft_lstlen(stcks.a);
	if (len < 2)
		return (stcks);
	tmp2 = stcks.a;
	while (tmp2->nxt->nxt)
		tmp2 = tmp2->nxt;
	tmp1 = tmp2->nxt;
	tmp2->nxt = NULL;
	tmp1->nxt = stcks.a;
	stcks.a = tmp1;
	return (stcks);
}

t_2_stcks				rrb(t_2_stcks stcks)
{
	size_t					len;
	t_list					*tmp1;
	t_list					*tmp2;

	len = ft_lstlen(stcks.b);
	if (len < 2)
		return (stcks);
	tmp2 = stcks.b;
	while (tmp2->nxt->nxt)
		tmp2 = tmp2->nxt;
	tmp1 = tmp2->nxt;
	tmp2->nxt = NULL;
	tmp1->nxt = stcks.b;
	stcks.b = tmp1;
	return (stcks);
}

t_2_stcks				rrr(t_2_stcks stcks)
{
	stcks = rra(stcks);
	stcks = rrb(stcks);
	return (stcks);
}
