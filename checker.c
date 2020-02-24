/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 18:20:59 by u18188899         #+#    #+#             */
/*   Updated: 2020/02/24 10:09:24 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_2_stcks				ft_gt_stcks(int ac, char **av)
{
	t_2_stcks				stcks;
	int						res;
	int						n_arg;

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
int						ft_chk_instrs(char **instr)
{
	size_t					n_s;
	char					*i;

	i = *instr;
	while (i && ft_strchr(i, '\n'))
	{
		n_s = ft_strchr(i, '\n') - i;
		if (ft_strncmp(i, "sa", n_s) && ft_strncmp(i, "sb", n_s) &&
			ft_strncmp(i, "ss", n_s) && ft_strncmp(i, "pa", n_s) &&
			ft_strncmp(i, "pb", n_s) && ft_strncmp(i, "ra", n_s) &&
			ft_strncmp(i, "rb", n_s) && ft_strncmp(i, "rr", n_s) &&
			ft_strncmp(i, "rra", n_s) && ft_strncmp(i, "rrb", n_s) &&
			ft_strncmp(i, "rrr", n_s))
			return (0);
		i += (n_s + 1);
	}
	if (!ft_strcmp(i, ""))
		return (1);
	return (0);
}

/* ************************************************************************** */
int						ft_exct_instrs(t_2_stcks stcks, char *instr)
{
	size_t					n_s;

	while (instr && ft_strchr(instr, '\n'))
	{
		n_s = ft_strchr(instr, '\n') - instr;
		ft_do_instrs(stcks, instr, n_s);
		instr += (n_s + 1);
	}	
	return (0);
}

/* ************************************************************************** */
int						main(int ac, char **av)
{
	t_2_stcks				stcks;
	char					*buff[1];
	int						i;

	stcks = ft_gt_stcks(ac, av);
	i = getNL(STDIN_FILENO, buff);
	if (!ft_chk_instrs(buff))
		ft_error(stcks.a, stcks.b);
	ft_exct_instrs(stcks, *buff) ?
		ft_putstr_fd("OK\n", STDOUT_FILENO) :
		ft_putstr_fd("KO\n", STDOUT_FILENO);
	return (0);
}