/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 09:24:49 by u18188899         #+#    #+#             */
/*   Updated: 2020/02/24 12:42:13 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_2_stcks				ft_do_instrs(t_2_stcks stcks, char *instr, size_t n_s)
{
	if (!ft_strncmp(instr, "sa", n_s))
		stcks = ft_do_sa(stcks);
	else if (!ft_strncmp(instr, "sb", n_s))
		stcks = ft_do_sb(stcks);
	else if (!ft_strncmp(instr, "ss", n_s))
		stcks = ft_do_ss(stcks);
	else if (!ft_strncmp(instr, "pa", n_s))
		stcks = ft_do_pa(stcks);
	else if (!ft_strncmp(instr, "pb", n_s))
		stcks = ft_do_pb(stcks);
	else if (!ft_strncmp(instr, "ra", n_s))
		stcks = ft_do_ra(stcks);
	else if (!ft_strncmp(instr, "rb", n_s))
		stcks = ft_do_rb(stcks);
	else if (!ft_strncmp(instr, "rr", n_s))
		stcks = ft_do_rr(stcks);
	else if (!ft_strncmp(instr, "rra", n_s))
		stcks = ft_do_rra(stcks);
	else if (!ft_strncmp(instr, "rrb", n_s))
		stcks = ft_do_rrb(stcks);
	else if (!ft_strncmp(instr, "rrr", n_s))
		stcks = ft_do_rrr(stcks);
	return (stcks);
}

t_2_stcks				ft_do_sa(t_2_stcks stcks)
{
	size_t					len_a;

	len_a = ft_lstlen(stcks.a);
	if (len_a > 1)
	{
		return (stcks);
	}
	return (stcks);
}
