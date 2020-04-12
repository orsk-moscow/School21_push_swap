/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:10:20 by klekisha          #+#    #+#             */
/*   Updated: 2020/04/12 16:17:35 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int						ft_3_args(t_lst_p_s *el1)
{
	t_lst_p_s			*el2;
	t_lst_p_s			*el3;

	el2 = el1->nxt;
	el3 = el2->nxt;
	if (el1->el.ind == 0 && el2->el.ind == 1 && el3->el.ind == 2)
		;
	else if (el1->el.ind == 0 && el2->el.ind == 2 && el3->el.ind == 1)
		write(STDOUT_FILENO, "rra\nsa\n", 7);
	else if (el1->el.ind == 1 && el2->el.ind == 0 && el3->el.ind == 2)
		write(STDOUT_FILENO, "sa\n", 3);
	else if (el1->el.ind == 1 && el2->el.ind == 2 && el3->el.ind == 0)
		write(STDOUT_FILENO, "rra\n", 4);
	else if (el1->el.ind == 2 && el2->el.ind == 1 && el3->el.ind == 0)
		write(STDOUT_FILENO, "ra\nsa\n", 6);
	else if (el1->el.ind == 2 && el2->el.ind == 0 && el3->el.ind == 1)
		write(STDOUT_FILENO, "ra\n", 3);
	return (0);
}

int						main(int ac, char **av)
{
	t_stcks					*stcks;
	int						els_b;

	if (ft_is_dplcts(ac, av))
		ft_error_1();
	stcks = ft_gt_stcks_1(ac, av);
	stcks->a->lst = ft_clct_inds(stcks->a->lst);
	if (ac == 4)
		exit(ft_3_args(stcks->a->lst));
	stcks = do_markup(stcks);
	els_b = --ac - stcks->a->els_n;
	ac = stcks->a->els_n;
	stcks = do_fr_a_to_b(stcks);
	while (stcks->b->lst)
		stcks = do_fr_b_to_a(stcks, els_b--, ac++);
	stcks = ft_align_a(stcks, ac);
	exit(0);
}
