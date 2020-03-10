// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   instructions2.c                                    :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2020/02/24 09:39:29 by u18188899         #+#    #+#             */
// /*   Updated: 2020/02/25 19:19:19 by u18188899        ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include "../includes/push_swap.h"

t_2_stcks_1				*ft_do_rb_1(t_2_stcks_1 *stcks)
{
	size_t					len;
	t_lst_psh_swp_1			*tmp1;
	t_lst_psh_swp_1			*tmp2;

	len = ft_lstlen_1(stcks->b->lst);
	if (len < 2)
		return (stcks);
	tmp1 = stcks->b->lst;
	stcks->b->lst = stcks->b->lst->next;
	tmp2 = stcks->b->lst;
	tmp1->next = NULL;
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp1;
	return (stcks);
}

// t_2_stcks				ft_do_rr(t_2_stcks stcks)
// {
// 	stcks = ft_do_ra(stcks);
// 	stcks = ft_do_rb(stcks);
// 	return (stcks);
// }

t_2_stcks_1				*ft_do_rra_1(t_2_stcks_1 *stcks)
{
	size_t					len;
	t_lst_psh_swp_1			*tmp1;
	t_lst_psh_swp_1			*tmp2;

	len = ft_lstlen_1(stcks->a->lst);
	if (len < 2)
		return (stcks);
	tmp2 = stcks->a->lst;
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	tmp1 = tmp2->next;
	tmp2->next = NULL;
	tmp1->next = stcks->a->lst;
	stcks->a->lst = tmp1;
	return (stcks);
}

t_2_stcks_1				*ft_do_rrb_1(t_2_stcks_1 *stcks)
{
	size_t					len;
	t_lst_psh_swp_1			*tmp1;
	t_lst_psh_swp_1			*tmp2;

	len = ft_lstlen_1(stcks->b->lst);
	if (len < 2)
		return (stcks);
	tmp2 = stcks->b->lst;
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	tmp1 = tmp2->next;
	tmp2->next = NULL;
	tmp1->next = stcks->b->lst;
	stcks->b->lst = tmp1;
	return (stcks);
}

// t_2_stcks				ft_do_rrr(t_2_stcks stcks)
// {
// 	stcks = ft_do_rra(stcks);
// 	stcks = ft_do_rrb(stcks);
// 	return (stcks);
// }
