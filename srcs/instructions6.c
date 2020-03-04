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

// #include "../push_swap.h"

// t_2_stcks				ft_do_rb(t_2_stcks stcks)
// {
// 	size_t					len;
// 	t_list					*tmp1;
// 	t_list					*tmp2;

// 	len = ft_lstlen(stcks.b);
// 	if (len < 2)
// 		return (stcks);
// 	tmp1 = stcks.b;
// 	stcks.b = stcks.b->next;
// 	tmp2 = stcks.b;
// 	tmp1->next = NULL;
// 	while (tmp2->next)
// 		tmp2 = tmp2->next;
// 	tmp2->next = tmp1;
// 	return (stcks);
// }

// t_2_stcks				ft_do_rr(t_2_stcks stcks)
// {
// 	stcks = ft_do_ra(stcks);
// 	stcks = ft_do_rb(stcks);
// 	return (stcks);
// }

// t_2_stcks				ft_do_rra(t_2_stcks stcks)
// {
// 	size_t					len;
// 	t_list					*tmp1;
// 	t_list					*tmp2;

// 	len = ft_lstlen(stcks.a);
// 	if (len < 2)
// 		return (stcks);
// 	tmp2 = stcks.a;
// 	while (tmp2->next->next)
// 		tmp2 = tmp2->next;
// 	tmp1 = tmp2->next;
// 	tmp2->next = NULL;
// 	tmp1->next = stcks.a;
// 	stcks.a = tmp1;
// 	return (stcks);
// }

// t_2_stcks				ft_do_rrb(t_2_stcks stcks)
// {
// 	size_t					len;
// 	t_list					*tmp1;
// 	t_list					*tmp2;

// 	len = ft_lstlen(stcks.b);
// 	if (len < 2)
// 		return (stcks);
// 	tmp2 = stcks.b;
// 	while (tmp2->next->next)
// 		tmp2 = tmp2->next;
// 	tmp1 = tmp2->next;
// 	tmp2->next = NULL;
// 	tmp1->next = stcks.b;
// 	stcks.b = tmp1;
// 	return (stcks);
// }

// t_2_stcks				ft_do_rrr(t_2_stcks stcks)
// {
// 	stcks = ft_do_rra(stcks);
// 	stcks = ft_do_rrb(stcks);
// 	return (stcks);
// }
