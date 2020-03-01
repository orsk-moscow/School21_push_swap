/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 18:20:59 by u18188899         #+#    #+#             */
/*   Updated: 2020/03/01 16:47:40 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst_psh_swp_1			*ft_clc_indxs(t_lst_psh_swp_1 *stck)
{
	
	return (stck);
}

int						main(int ac, char **av)
{
	t_2_stcks_1				stcks;
	char					*buff[1];
	int						i;

	if (ft_is_dplcts(ac, av))
		ft_error_1();
	stcks = ft_gt_stcks_1(ac, av);
	stcks.a = ft_clc_indxs(stcks.a);

	ft_free_1(stcks.a,stcks.b);
	return (0);
}
