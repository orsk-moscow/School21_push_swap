/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 18:20:59 by u18188899         #+#    #+#             */
/*   Updated: 2020/02/17 19:15:24 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int ac, char **av)
{
	int			res;
	t_list		*stck_a;
	t_list		*stck_b;

	// printf("size of int = %zu\n",sizeof(int)); // 4 bytes
	res = ft_atoi(av[--ac]);
	stck_a = ft_lstnew(&res, sizeof(int));
	while (--ac > 0)
	{
		// printf("%i\n",ac);
		// printf("%s\n",av[ac]);
		res = ft_atoi(av[ac]);
		ft_lstadd(&stck_a, ft_lstnew(&res, sizeof(int)));
		// printf("%i\n",res);
	}
	while (stck_a)
	{
		printf("content of chain element: %i\n",*((int*)(stck_a->content)));
		stck_a = stck_a->next;
	}
	return (0);
}
