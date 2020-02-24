/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 11:26:12 by u18188899         #+#    #+#             */
/*   Updated: 2020/02/24 11:30:18 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
						
size_t					ft_lstlen(t_list *lst)
{
	size_t					sz;

	sz = 0;
	while (lst)
	{
		sz++;
		lst = lst->next;
	}
	return (sz);
}
