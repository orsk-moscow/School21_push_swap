/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <klekisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:06:48 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/14 12:06:49 by klekisha         ###   ########.fr       */
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
