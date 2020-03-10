/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 18:20:59 by u18188899         #+#    #+#             */
/*   Updated: 2020/03/10 21:55:01 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* ************************************************************************** */
int						ft_chk_instrs(char **instr)
{
	size_t					n_s;
	char					*i;

	i = *instr;
	while (i && ft_strchr(i, '\n'))
	{
		n_s = ft_strchr(i, '\n') - i;
		if (!n_s || (ft_strncmp(i, "sa", n_s) && ft_strncmp(i, "sb", n_s) &&
			ft_strncmp(i, "ss", n_s) && ft_strncmp(i, "pa", n_s) &&
			ft_strncmp(i, "pb", n_s) && ft_strncmp(i, "ra", n_s) &&
			ft_strncmp(i, "rb", n_s) && ft_strncmp(i, "rr", n_s) &&
			ft_strncmp(i, "rra", n_s) && ft_strncmp(i, "rrb", n_s) &&
			ft_strncmp(i, "rrr", n_s)))
			return (0);
		i += (n_s + 1);
	}
	if (!ft_strcmp(i, ""))
		return (1);
	return (0);
}

/* ************************************************************************** */
t_2_stcks				ft_exct_instrs(t_2_stcks stcks, char *instr)
{
	size_t					n_s;

	while (instr && ft_strchr(instr, '\n'))
	{
		n_s = ft_strchr(instr, '\n') - instr;
		stcks = ft_do_instrs(stcks, instr, n_s);
		instr += (n_s + 1);
	}	
	return (stcks);
}

/* ************************************************************************** */
int						main(int ac, char **av)
{
	t_2_stcks				stcks;
	char					*buff[1];
	int						i;

	if (ft_is_dplcts(ac, av))
		ft_error(stcks->a, stcks->b);
	stcks = ft_gt_stcks(ac, av);
	i = getNL(STDIN_FILENO, buff);
	if (!ft_chk_instrs(buff))
		ft_error(stcks->a, stcks->b);
	stcks = ft_exct_instrs(stcks, *buff);
	(ft_is_lst_srtd(stcks->a) && !stcks->b && (int)ft_lstlen(stcks->a) == --ac) ?
		ft_putstr_fd("OK\n", STDOUT_FILENO) :
		ft_putstr_fd("KO\n", STDOUT_FILENO);



/* content below should ne deleted before validation */
	// t_list					*temp;
	// temp = stcks->a;
	// while (temp)
	// {
	// 	printf("content of chain element: %i\n",*((int*)(temp->content)));
	// 	temp = temp->next;
	// }
	// printf("-------end of stack a-------\n\n\n------start of stack b------\n");
/* content above should ne deleted before validation */

/* content below should ne deleted before validation */
	// temp = stcks->b;
	// while (temp)
	// {
	// 	printf("content of chain element: %i\n",*((int*)(temp->content)));
	// 	temp = temp->next;
	// }
/* content above should ne deleted before validation */



	ft_free(stcks->a,stcks->b);
	return (0);
}
