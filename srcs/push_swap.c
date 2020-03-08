/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <klekisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 18:20:59 by u18188899         #+#    #+#             */
/*   Updated: 2020/03/08 16:41:15 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* ************************************************************************** */
int						ft_do_mode_grtr_2(t_rlst_markup *mode_grtr)
{
	int						tmp1;
	t_lst_psh_swp_1			*tmp2;

	tmp1 = mode_grtr->head;
	tmp2 = mode_grtr->lst;
	if (!tmp2 || !tmp2->next || !tmp2->next->next)
		return (0);
	if (!tmp2 || !tmp2->next || !tmp2->next->next)
		return (0);
	if (tmp2->elmnt.indx == tmp1 ||
		tmp2->next ->elmnt.indx != tmp1)
		return (0);
	if (tmp2->elmnt.nmbr > tmp2->next->elmnt.nmbr &&
		tmp2->elmnt.nmbr < tmp2->next->next->elmnt.nmbr)
		return (1);
	return (0);
}

int						ft_is_sa_needed(t_2_stcks_1 stcks)
{
	return(ft_strcmp(stcks.a->mode,"grtr") ?
		ft_do_mode_grtr_2(stcks.a) : 0);
}
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
	while (!ft_is_stack_clear(stcks.a->lst))
	{
		if (ft_is_sa_needed(stcks))
		{
			stcks = ft_do_sa_1(stcks);
			stcks.a->lst->next->elmnt.rslt = 0;
		}
		else if (stcks.a->lst->elmnt.rslt == 1)
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
	stcks.a->lst = ft_clct_indxs(ac, av, stcks.a);
	stcks.a = ft_do_markup(stcks.a);
	stcks = ft_do_from_a_to_b(stcks);
	ft_free_1(stcks.a,stcks.b);
	return (0);
}
