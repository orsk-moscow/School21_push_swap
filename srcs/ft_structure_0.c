/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structure_0.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 15:14:05 by u18188899         #+#    #+#             */
/*   Updated: 2020/03/01 15:47:41 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_lst_psh_swp_0			*ft_lst0new(int nmbr, int indx)
{
	t_lst_psh_swp_0			*p1;
	t_nmbr_indx_rslt		elm;

	if (!(p1 = (t_lst_psh_swp_0*)malloc(sizeof(t_lst_psh_swp_0))))
		return (NULL);

	// if (!content || !content_size)
	// {
	// 	p1->content = NULL;
	// 	p1->content_size = 0;
	// }

	// else
	// {
	// if (!(p1->content = malloc(content_size)))
	// 	return (NULL);
	// p1->content = ft_memcpy(p1->content, content, content_size);
	// p1->content_size = content_size;
	// }
	elm.indx = indx;
	elm.rslt = -1;
	elm.nmbr = nmbr;
	p1->elmnt = elm;
	p1->next = NULL;
	return (p1);
}

void	ft_lst0add(t_lst_psh_swp_0 **alst, t_lst_psh_swp_0 *new)
{
	if (new && alst)
	{
		new->next = (*alst);
		(*alst) = new;
	}
}
