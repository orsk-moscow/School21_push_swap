/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 09:38:40 by u18188899         #+#    #+#             */
/*   Updated: 2020/02/24 19:21:32 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_2_stcks				ft_do_sb(t_2_stcks stcks)
{
	size_t					len_a;
	void					*tmp1;
	void					*tmp2;

	len_a = ft_lstlen(stcks.b);
	if (len_a <= 1)
		return (stcks);
	tmp1 = stcks.b->content;
	tmp2 = stcks.b->next->content;
	stcks.b->content = tmp2;
	stcks.b->next->content = tmp1;
	return (stcks);
}

t_2_stcks				ft_do_ss(t_2_stcks stcks)
{
	stcks = ft_do_sa(stcks);
	stcks = ft_do_sb(stcks);
	return (stcks);
}

t_2_stcks				ft_do_pa(t_2_stcks stcks)
{
	return (stcks);
}

t_2_stcks				ft_do_pb(t_2_stcks stcks)
{
	return (stcks);
}

t_2_stcks				ft_do_ra(t_2_stcks stcks)
{
	return (stcks);
}