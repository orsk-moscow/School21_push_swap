/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 18:20:59 by u18188899         #+#    #+#             */
/*   Updated: 2020/02/26 20:23:42 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_2_stcks				stcks;
	char					*buff[1];
	int						i;

	if (ft_is_dplcts(ac, av))
		ft_error(stcks.a, stcks.b);
	stcks = ft_gt_stcks(ac, av);
	// ac - 1 = num of integers;





	ft_free(stcks.a,stcks.b);
	return (0);
}
