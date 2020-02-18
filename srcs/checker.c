/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 18:20:59 by u18188899         #+#    #+#             */
/*   Updated: 2020/02/18 08:20:51 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int ft_chck_arg(int intgr, const char *strng)
{
	return (ft_strcmp(ft_itoa(intgr),strng));
}


void		ft_del(void *content, size_t content_size)
{
	// free(content);
	// ft_memdel(&content);
	// content_size = 0;
	return ;
}

void		ft_error(t_list *stck_a,t_list *stck_b)
{
	
	if (stck_a)
		ft_lstdel(&stck_a, ft_del); // here smth wrong - exception
	if (stck_b)	
		ft_lstdel(&stck_b, ft_del);
	ft_putstr_fd("Error\n",(int)STDERR_FILENO);
	exit (-1);
}

int			main(int ac, char **av)
{
	int			res;
	int			n_arg;
	t_list		*stck_a;
	t_list		*stck_b;

	// printf("size of int = %zu\n",sizeof(int)); // 4 bytes
	
	n_arg = ac;
	res = ft_atoi(av[--ac]);
	if (ft_chck_arg(res, av[ac]))
		ft_error(stck_a, stck_b);
	stck_a = ft_lstnew(&res, sizeof(int));
	while (--ac > 0)
	{

		// printf("%i\n",ac);
		// printf("%s\n",av[ac]);

		res = ft_atoi(av[ac]);
		if (ft_chck_arg(res, av[ac]))
			ft_error(stck_a, stck_b);
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
