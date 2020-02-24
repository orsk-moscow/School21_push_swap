/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 18:22:45 by u18188899         #+#    #+#             */
/*   Updated: 2020/02/24 11:18:30 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define SIZE 1000000
# include "libft/libft.h"
# include "gnl/get_next_line.h"

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

/* content below should ne deleted before validation */
// # include <stdio.h>
/* content above should ne deleted before validation */

# include <errno.h>
# include <limits.h>
/* ************************************************************************** */
typedef struct			s_2_stcks
{
	t_list					*a;
	t_list					*b;
}						t_2_stcks;
/* ************************************************************************** */
int						ft_chck_arg(int intgr, const char *strng);
void					ft_del(void *content, size_t content_size);
void					ft_error(t_list *stck_a,t_list *stck_b);
t_2_stcks				ft_do_sa(t_2_stcks stcks);
t_2_stcks				ft_do_sb(t_2_stcks stcks);
t_2_stcks				ft_do_ss(t_2_stcks stcks);
t_2_stcks				ft_do_pa(t_2_stcks stcks);
t_2_stcks				ft_do_pb(t_2_stcks stcks);
t_2_stcks				ft_do_ra(t_2_stcks stcks);
t_2_stcks				ft_do_rb(t_2_stcks stcks);
t_2_stcks				ft_do_rr(t_2_stcks stcks);
t_2_stcks				ft_do_rra(t_2_stcks stcks);
t_2_stcks				ft_do_rrb(t_2_stcks stcks);
t_2_stcks				ft_do_rrr(t_2_stcks stcks);

#endif