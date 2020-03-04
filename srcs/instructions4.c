/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 09:24:49 by u18188899         #+#    #+#             */
/*   Updated: 2020/03/04 22:10:10 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* ************************************************************************** */
t_2_stcks_1				ft_do_sa_1(t_2_stcks_1 stcks)
{
	size_t					len_a;
	t_nmbr_indx_rslt		tmp1;
	t_nmbr_indx_rslt		tmp2;

	len_a = ft_lstlen(stcks.a);
	if (len_a <= 1)
		return (stcks);
	tmp1 = stcks.a->elmnt;
	tmp2 = stcks.a->next->elmnt;
	stcks.a->elmnt = tmp2;
	stcks.a->next->elmnt = tmp1;
	return (stcks);
}
