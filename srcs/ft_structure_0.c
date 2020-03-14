/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structure_0.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <klekisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:10:01 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/14 14:52:30 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_lst_p_s			*ft_lstnew_1(int num, int ind)
{
	t_lst_p_s				*p1;
	t_num_ind_res			elm;

	if (!(p1 = (t_lst_p_s*)ft_memalloc(sizeof(t_lst_p_s))))
		return (NULL);
	elm.ind = ind;
	elm.res = -1;
	elm.num = num;
	p1->el = elm;
	p1->nxt = NULL;
	return (p1);
}

void				ft_lstadd_1(t_lst_p_s **alst, t_lst_p_s *new)
{
	if (new && alst)
	{
		new->nxt = (*alst);
		(*alst) = new;
	}
}

void				ft_lstdel_1(t_lst_p_s **alst, void (*del)(int, int, int))
{
	if (alst && del)
	{
		if ((*alst)->nxt)
			ft_lstdel_1(&((*alst)->nxt), del);
		ft_lstdelone_1(&(*alst), del);
	}
}

void				ft_lstdelone_1(t_lst_p_s **alst, void (*del)(int, int, int))
{
	if (!alst || !(*alst) || !del)
		return ;
	del((*alst)->el.ind, (*alst)->el.num, (*alst)->el.res);
	free(*(alst));
	(*alst) = NULL;
}

void				ft_del_1(int num, int ind, int res)
{
	num++;
	num--;
	ind++;
	ind--;
	res++;
	res--;
	return ;
}
