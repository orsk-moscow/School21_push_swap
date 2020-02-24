/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 18:20:59 by u18188899         #+#    #+#             */
/*   Updated: 2020/02/24 09:57:14 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_2_stcks				ft_gt_stcks(int ac, char **av)
{
	t_2_stcks				stcks;
	int						res;
	int						n_arg;

	// t_list					*stck_a;

	if (ac == 1)
		exit(1);
	n_arg = ac;
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
	while (stcks.a)
	{
		printf("content of chain element: %i\n",*((int*)(stcks.a->content)));
		stcks.a = stcks.a->next;
	}
/* content above should ne deleted before validation */
	return (stcks);
}

/* ************************************************************************** */
int						ft_chk_instrctns(char **instrctn)
{
	size_t					n_sym;
	char					*i;

	i = *instrctn;
	while (i && ft_strchr(i, '\n'))
	{
		n_sym = ft_strchr(i, '\n') - i;
		if (ft_strncmp(i, "sa", n_sym) && ft_strncmp(i, "sb", n_sym) &&
			ft_strncmp(i, "ss", n_sym) && ft_strncmp(i, "pa", n_sym) &&
			ft_strncmp(i, "pb", n_sym) && ft_strncmp(i, "ra", n_sym) &&
			ft_strncmp(i, "rb", n_sym) && ft_strncmp(i, "rr", n_sym) &&
			ft_strncmp(i, "rra", n_sym) && ft_strncmp(i, "rrb", n_sym) &&
			ft_strncmp(i, "rrr", n_sym))
			return (0);
		i += (n_sym + 1);
	}
	if (!ft_strcmp(i, ""))
		return (1);
	return (0);
}
/* THIS IS MAIN_v0 WITH A READING STACK A */
// int						main(int ac, char **av)
// {
// 	int			res;
// 	int			n_arg;
// 	t_list		*stck_a;
// 	t_list		*stck_b;

// 	n_arg = ac;
// 	res = ft_atoi(av[--ac]);
// 	if (ft_chck_arg(res, av[ac]))
// 		ft_error(stck_a, stck_b);
// 	stck_a = ft_lstnew(&res, sizeof(int));
// 	while (--ac > 0)
// 	{
// 		res = ft_atoi(av[ac]);
// 		if (ft_chck_arg(res, av[ac]))
// 			ft_error(stck_a, stck_b);
// 		ft_lstadd(&stck_a, ft_lstnew(&res, sizeof(int)));
// 	}
// 	while (stck_a)
// 	{
// 		printf("content of chain element: %i\n",*((int*)(stck_a->content)));
// 		stck_a = stck_a->next;
// 	}
// 	return (0);
// }

/* THIS IS MAIN_v1 WITH A READING INSTRUCTIONS VIA STDIN */
// int						main()
// {
// 	char					*buff[SIZE + 1];
// 	while (getNL(STDIN_FILENO, buff))
// 	{
// 		printf("OK\n");
// 		exit(1);
// 	}
// 	return (1);
// }

int						ft_exct_instrctns(t_2_stcks stcks, char *instrctn)
{
	size_t					n_sym;

	while (instrctn && ft_strchr(instrctn, '\n'))
	{
		n_sym = ft_strchr(instrctn, '\n') - instrctn;
		ft_do_instrctns(t_2_stcks stcks, char *instrctn, size_t n_sym);
		instrctn += (n_sym + 1);
	}	
	return (0);
}

/* THIS IS MAIN_v2 WITH A READING STACK A AND INSTRUCTIONS VIA STDIN */
/* ************************************************************************** */
int						main(int ac, char **av)
{
	t_2_stcks				stcks;

	// t_list					*stck_a;
	// t_list					*stck_b;

	char					*buff[1];
	int						i;

	stcks = ft_gt_stcks(ac, av);
	i = getNL(STDIN_FILENO, buff);
	if (!ft_chk_instrctns(buff))
		ft_error(stcks.a, stcks.b);
	ft_exct_instrctns(stcks, *buff) ?
		ft_putstr_fd("OK\n", STDOUT_FILENO) :
		ft_putstr_fd("KO\n", STDOUT_FILENO);
	return (0);
}
