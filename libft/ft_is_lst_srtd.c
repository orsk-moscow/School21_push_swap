/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_lst_srtd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <klekisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:05:36 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/14 12:05:36 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int						ft_is_lst_srtd(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->nxt)
	{
		if (*((int*)(lst->content)) >= *((int*)(lst->nxt->content)))
			return (0);
		lst = lst->nxt;
	}
	return (1);
}
