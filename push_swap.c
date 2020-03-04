/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 18:20:59 by u18188899         #+#    #+#             */
/*   Updated: 2020/03/04 22:18:58 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ************************************************************************** */
t_2_stcks_1				ft_do_from_a_to_b(t_2_stcks_1 stcks)
{
// Pseudocode

	// WHILE stack A has elements with "false" value in "Keep in Stack A" field
//       IF sa (swap a) is needed
//             perform sa (swap a) command
//             update markup
//       ELSE IF head element of stack A has "false" value in "Keep in Stack A" field
//             perform pb (push b) command
//       ELSE
//             perform ra (rotate a) command
// How to check that sa (swap a) is needed?
// You have to perform sa (swap a) and then remake markup. We only have to update markup with chosen at previous steps parameters (as markup_head).

// Then we have to compare how many elements will be kept in stack A with performed sa (swap a) and without it.

// If after performing sa (swap a) more elements will be kept, it means that there is a reason to do it.
	while (!ft_is_stack_clear(stcks.a))
	{
		if (ft_is_sa_needed(stcks.a))
		{
			stcks = ft_do_sa_1(stcks);
			stcks.a = ft_do_markup(stcks.a);
		}
		else if (stcks.a->elmnt.rslt == 1)
		{
			stcks = ft_do_pb_1(stcks);
		}
		else
		{
			stcks = ft_do_ra_1(stcks);
		}
	}
	return (stcks);
}

/* ************************************************************************** */
int						main(int ac, char **av)
{
	t_2_stcks_1				stcks;

	if (ft_is_dplcts(ac, av))
		ft_error_1();
	stcks = ft_gt_stcks_1(ac, av);
	// if (ac < 5)
	// 	return (ft_sort_3_elmnts());
	// else if (ac < 7)
	// 	return (ft_sort_5_elmnts());
	stcks.a = ft_clct_indxs(ac, av, stcks.a);
	stcks.a = ft_do_markup(stcks.a);
	stcks = ft_do_from_a_to_b(stcks);
	ft_free_1(stcks.a,stcks.b);
	return (0);
}
