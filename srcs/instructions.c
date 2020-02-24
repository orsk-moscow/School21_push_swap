/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 09:24:49 by u18188899         #+#    #+#             */
/*   Updated: 2020/02/24 09:56:08 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_2_stcks				ft_do_instrctns(t_2_stcks stcks, char *instrctn, size_t n_sym)
{
	if (ft_strncmp(instrctn, "sa", n_sym))
		stcks = ft_do_sa(stcks);
	else if (ft_strncmp(instrctn, "sb", n_sym))
		stcks = ft_do_sb();
	else if (ft_strncmp(instrctn, "ss", n_sym))
		stcks = ft_do_ss();
	else if (ft_strncmp(instrctn, "pa", n_sym))
		stcks = ft_do_pa();
	else if (ft_strncmp(instrctn, "pb", n_sym))
		stcks = ft_do_pb();
	else if (ft_strncmp(instrctn, "ra", n_sym))
		stcks = ft_do_ra();
	else if (ft_strncmp(instrctn, "rb", n_sym))
		stcks = ft_do_rb();
	else if (ft_strncmp(instrctn, "rr", n_sym))
		stcks = ft_do_rr();
	else if (ft_strncmp(instrctn, "rra", n_sym))
		stcks = ft_do_rra();
	else if (ft_strncmp(instrctn, "rrb", n_sym))
		stcks = ft_do_rrb();
	else if (ft_strncmp(instrctn, "rrr", n_sym))
		stcks = ft_do_rrr();
	return (stcks);
}

t_2_stcks				ft_do_sa(t_2_stcks stcks)
{

}
