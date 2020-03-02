/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 18:20:59 by u18188899         #+#    #+#             */
/*   Updated: 2020/03/01 19:19:15 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst_psh_swp_1			*ft_clct_indxs(int ac, char **av, t_lst_psh_swp_1 *stck)
{
	int						itrtr1;
	int						itrtr2;
	int						indx;

	itrtr1 = 1;
	while (itrtr1 < ac)
	{
		indx = 0;
		itrtr2 = 1;
		while (itrtr2 < ac)
			if (ft_strcmp(av[itrtr1],av[itrtr2++])>0)
				indx++;
		itrtr1++;
		stck->elmnt.indx = indx;
		stck = stck->next;
	}
	return (stck);
}

t_rlst_markup			ft_do_mode_grtr(t_rlst_markup mode_grtr)
{
	if (!mode_grtr.lst->next)
	{
		mode_grtr.head = mode_grtr.lst->elmnt.indx;
		mode_grtr.elmnts_in_a = 1;
		return (mode_grtr);
	}
	if (mode_grtr.lst->elmnt.nmbr < mode_grtr.lst->next->elmnt.nmbr)
	{
		mode_grtr.lst->elmnt.rslt++;
		if (mode_grtr.lst->elmnt.rslt > mode_grtr.elmnts_in_a)
		{
			
		}
		mode_grtr.head = mode_grtr.lst->elmnt.indx;
	}
	mode_grtr.lst = mode_grtr.lst->next;
	return (ft_do_mode_grtr(mode_grtr));
}

t_rlst_markup			ft_do_mode_indx(t_rlst_markup stck)
{
	t_rlst_markup			mode_indx;


	return (mode_indx);
}

t_lst_psh_swp_1			*ft_do_markup(t_lst_psh_swp_1 *stck)
{
	t_rlst_markup			mode_grtr;
	t_rlst_markup			mode_indx;

	mode_grtr = ft_do_mode_grtr(mode_grtr);
	mode_indx = ft_do_mode_indx(mode_indx);
	return (stck);
}

int						main(int ac, char **av)
{
	t_2_stcks_1				stcks;

	if (ft_is_dplcts(ac, av))
		ft_error_1();
	stcks = ft_gt_stcks_1(ac, av);
	stcks.a = ft_clct_indxs(ac, av, stcks.a);
	stcks.a = ft_do_markup(stcks.a);
	ft_free_1(stcks.a,stcks.b);
	return (0);
}
