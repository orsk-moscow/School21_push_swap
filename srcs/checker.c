/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <klekisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:09:39 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/14 15:14:51 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

t_2_stcks				ft_exct_instrs(t_2_stcks stcks, char *instr)
{
	size_t					n_s;

	while (instr && ft_strchr(instr, '\n'))
	{
		n_s = ft_strchr(instr, '\n') - instr;
		stcks = do_instrs(stcks, instr, n_s);
		instr += (n_s + 1);
	}
	return (stcks);
}

int						main(int ac, char **av)
{
	t_2_stcks				stcks;
	char					*buff[1];
	char					*tmp;
	int						i;
	int						size;

	if (ft_is_dplcts(ac, av))
		ft_error();
	stcks = ft_gt_stcks(ac, av);
	*buff = (char*)ft_memalloc(sizeof(char) * (SIZE + 1));
	tmp = *buff;
	size = SIZE;
	while ((i = read(STDIN_FILENO, tmp, size)) != 0 && (
		tmp = tmp + i))
		size = size - i;
	if (!ft_chk_instrs(buff))
		ft_error();
	stcks = ft_exct_instrs(stcks, *buff);
	(ft_is_lst_srtd(stcks.a) && !stcks.b && (int)ft_lstlen(stcks.a) == --ac) ?
		ft_putstr_fd("OK\n", STDOUT_FILENO) :
		ft_putstr_fd("KO\n", STDOUT_FILENO);
	free(*buff);
	*buff = NULL;
	exit(0);
}
