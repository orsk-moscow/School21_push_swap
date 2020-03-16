/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:09:58 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/17 00:15:15 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_2_stcks				ft_gt_stcks(int ac, char **av)
{
	t_2_stcks				stcks;
	int						res;
	int						n_w;

	stcks.a = NULL;
	stcks.b = NULL;
	// res = (n_w == 1 ? ft_atoi(av[ac--]) : ft_atoi(strrchr(av[ac], ' ')));
	// res = ft_atoi(av[--ac]);
	// if (ft_chck_arg(res, av[ac]))
	// 	ft_error();
	// stcks.a = ft_lstnew(&res, sizeof(int));
	while (--ac > 0)
	{
		if ((n_w = ft_count_words(av[ac],' ')) > 1)
		{
			while (n_w--)
			{
				
			}
		}
		else if (n_w == 1)
		{
			res = ft_atoi(av[ac]);
			if (ft_chck_arg(res, av[ac]))
				ft_error();
			ft_lstadd(&stcks.a, ft_lstnew(&res, sizeof(int)));
		}
	}
	return (stcks);
}

t_res_mrkp				*ft_init_stck(void)
{
	t_res_mrkp				*tmp1;

	if (!(tmp1 = (t_res_mrkp*)ft_memalloc(sizeof(t_res_mrkp))))
		ft_error_1();
	tmp1->lst = NULL;
	tmp1->els_n = 0;
	tmp1->hd = -1;
	tmp1->md = "";
	return (tmp1);
}

t_stcks					*ft_init_stcks(void)
{
	t_stcks					*tmp1;

	if (!(tmp1 = (t_stcks*)ft_memalloc(sizeof(t_stcks))))
		ft_error_1();
	if (!(tmp1->a = ft_init_stck()))
		ft_error_1();
	return (tmp1);
}

t_stcks					*ft_gt_stcks_1(int ac, char **av)
{
	t_stcks					*stcks;
	int						res;

	if (ac == 1)
		exit(1);
	stcks = ft_init_stcks();
	stcks->a->lst = NULL;
	res = ft_atoi(av[--ac]);
	if (ft_chck_arg(res, av[ac]))
		ft_error_1();
	stcks->a->lst = ft_lstnew_1(res, -1);
	while (--ac > 0)
	{
		res = ft_atoi(av[ac]);
		if (ft_chck_arg(res, av[ac]))
			ft_error_1();
		ft_lstadd_1(&stcks->a->lst, ft_lstnew_1(res, -1));
	}
	return (stcks);
}

t_stcks					*rrb_n_s(t_stcks *stcks, int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		stcks = rrb_1_s(stcks);
	return (stcks);
}
