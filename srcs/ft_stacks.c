/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <klekisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 15:07:56 by u18188899         #+#    #+#             */
/*   Updated: 2020/03/08 14:25:54 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_2_stcks				ft_gt_stcks(int ac, char **av)
{
	t_2_stcks				stcks;
	int						res;
	int						n_arg;

	if (ac == 1)
		exit(1);
	n_arg = ac;
	stcks.a = NULL;
	stcks.b = NULL;
	res = ft_atoi(av[--ac]);
	if (ft_chck_arg(res, av[ac]))
		ft_error(stcks.a, stcks.b);
	stcks.a = ft_lstnew(&res, sizeof(int));
	while (--ac > 0)
	{
		res = ft_atoi(av[ac]);
		if (ft_chck_arg(res, av[ac]))
			ft_error(stcks.a, stcks.b);
		ft_lstadd(&stcks.a, ft_lstnew(&res, sizeof(int)));
	}
/* content below should ne deleted before validation */
	// t_list					*temp;
	// temp = stcks.a;
	// while (temp)
	// {
	// 	printf("content of chain element: %i\n",*((int*)(temp->content)));
	// 	temp = temp->next;
	// }
/* content above should ne deleted before validation */
	return (stcks);
}

t_2_stcks_1				ft_gt_stcks_1(int ac, char **av)
{
	t_2_stcks_1				stcks;
	int						res;
	int						n_arg;

	if (ac == 1)
		exit(1);
	n_arg = ac;
	stcks.a->lst = NULL;
	stcks.b->lst = NULL;
	res = ft_atoi(av[--ac]);
	if (ft_chck_arg(res, av[ac]))
		ft_error_1();
	stcks.a->lst = ft_lstnew_1(res, -1);
	while (--ac > 0)
	{
		res = ft_atoi(av[ac]);
		if (ft_chck_arg(res, av[ac]))
			ft_error_1();
		ft_lstadd_1(&stcks.a->lst, ft_lstnew_1(res, -1));
	}
/* content below should ne deleted before validation */
	// t_list					*temp;
	// temp = stcks.a->lst;
	// while (temp)
	// {
	// 	printf("content of chain element: %i\n",*((int*)(temp->content)));
	// 	temp = temp->next;
	// }
/* content above should ne deleted before validation */
	return (stcks);
}
