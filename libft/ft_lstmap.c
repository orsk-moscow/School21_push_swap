/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 20:09:14 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/13 22:26:42 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*elem;

	if (!lst || !f)
		return (NULL);
	elem = f(lst);
	if (elem)
		elem->nxt = ft_lstmap(lst->nxt, f);
	if (elem->nxt == NULL && lst->nxt != NULL)
	{
		free(elem);
		elem = NULL;
	}
	return (elem);
}
