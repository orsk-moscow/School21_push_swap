/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions5.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 09:38:40 by u18188899         #+#    #+#             */
/*   Updated: 2020/03/12 20:28:44 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// t_2_stcks_1				*ft_do_sb_1(t_2_stcks_1 *stcks)
// {
// 	size_t					len;
// 	void					tmp1;
// 	void					tmp2;

// 	len = ft_lstlen(stcks->b);
// 	if (len <= 1)
// 		return (stcks);
// 	tmp1 = stcks->b->content;
// 	tmp2 = stcks->b->next->content;
// 	stcks->b->content = tmp2;
// 	stcks->b->next->content = tmp1;
// 	return (stcks);
// }

// t_2_stcks_1				*ft_do_ss_1(t_2_stcks_1 *stcks)
// {
// 	stcks = ft_do_sa(stcks);
// 	stcks = ft_do_sb(stcks);
// 	return (stcks);
// }

t_2_stcks_1				*ft_do_pa_1(t_2_stcks_1 *stcks)
{
	size_t					len;
	t_lst_psh_swp_1			*tmp1;

	len = ft_lstlen_1(stcks->b->lst);
	if (len < 1)
		return (stcks);
	tmp1 = stcks->b->lst;
	stcks->b->lst = stcks->b->lst->next;
	tmp1->next = stcks->a->lst;
	stcks->a->lst = tmp1;
	ft_putstr_fd("pa\n", (int)STDOUT_FILENO);
	return (stcks);
}

t_2_stcks_1				*ft_do_pb_1(t_2_stcks_1 *stcks)
{
	size_t					len;
	t_lst_psh_swp_1			*tmp1;

	len = ft_lstlen_1(stcks->a->lst);
	if (len < 1)
		return (stcks);
	tmp1 = stcks->a->lst;
	stcks->a->lst = stcks->a->lst->next;
	tmp1->next = stcks->b->lst;
	stcks->b->lst = tmp1;
	ft_putstr_fd("pb\n", (int)STDOUT_FILENO);
	return (stcks);
}

t_2_stcks_1				*ft_do_ra_1_slnt(t_2_stcks_1 *stcks)
{
	size_t					len;
	t_lst_psh_swp_1			*tmp1;
	t_lst_psh_swp_1			*tmp2;

	len = ft_lstlen_1(stcks->a->lst);
	if (len < 2)
		return (stcks);
	tmp1 = stcks->a->lst;
	stcks->a->lst = stcks->a->lst->next;
	tmp2 = stcks->a->lst;
	tmp1->next = NULL;
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp1;
	return (stcks);
}

t_2_stcks_1				*ft_do_ra_1(t_2_stcks_1 *stcks)
{
	size_t					len;
	t_lst_psh_swp_1			*tmp1;
	t_lst_psh_swp_1			*tmp2;

	len = ft_lstlen_1(stcks->a->lst);
	if (len < 2)
		return (stcks);
	tmp1 = stcks->a->lst;
	stcks->a->lst = stcks->a->lst->next;
	tmp2 = stcks->a->lst;
	tmp1->next = NULL;
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp1;
	ft_putstr_fd("ra\n", (int)STDOUT_FILENO);
	return (stcks);
}
