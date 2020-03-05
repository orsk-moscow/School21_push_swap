/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 18:22:45 by u18188899         #+#    #+#             */
/*   Updated: 2020/03/05 17:07:33 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define SIZE 1000000
# include "../libft/libft.h"
# include "../gnl/get_next_line.h"

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>
# include <limits.h>

/* content below should ne deleted before validation */
# include <stdio.h>
/* content above should ne deleted before validation */

/* ************************************************************************** */
typedef struct			s_nmbr_indx_rslt
{
	int						nmbr;
	int						indx;
	int						rslt;
}						t_nmbr_indx_rslt;
/* ************************************************************************** */
typedef struct			s_lst_psh_swp_1
{
	t_nmbr_indx_rslt		elmnt;
	struct s_lst_psh_swp_1	*next;
}						t_lst_psh_swp_1;
/* ************************************************************************** */
typedef struct			s_2_stcks
{
	t_list					*a;
	t_list					*b;
}						t_2_stcks;
/* ************************************************************************** */
typedef struct			s_2_stcks_1
{
	t_lst_psh_swp_1			*a;
	t_lst_psh_swp_1			*b;
}						t_2_stcks_1;
/* ************************************************************************** */
typedef struct			s_rlst_markup
{
	t_lst_psh_swp_1			*lst;
	int						elmnts_in_a;
	int						head;
}						t_rlst_markup;
/* ************************************************************************** */
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
/* ************************************************************************** */
t_lst_psh_swp_1			*ft_lstnew_1(int nmbr, int indx);
t_lst_psh_swp_1			*ft_clct_indxs(int ac, char **av, t_lst_psh_swp_1 *stck);
t_lst_psh_swp_1			*ft_do_markup(t_lst_psh_swp_1 *stck);
t_lst_psh_swp_1			*ft_mark_in_indx_md(t_lst_psh_swp_1 *stck, int hd_indx);
t_lst_psh_swp_1			*ft_mark_in_grtr_md(t_lst_psh_swp_1 *stck, int hd_indx);
/* ************************************************************************** */
t_rlst_markup			ft_do_mode_grtr(t_rlst_markup mode_grtr);
t_rlst_markup			ft_do_mode_indx(t_rlst_markup mode_indx);
/* ************************************************************************** */
t_2_stcks_1				ft_gt_stcks_1(int ac, char **av);
t_2_stcks_1				ft_do_sa_1(t_2_stcks_1 stcks);
t_2_stcks_1				ft_do_pb_1(t_2_stcks_1 stcks);
t_2_stcks_1				ft_do_ra_1(t_2_stcks_1 stcks);
/* ************************************************************************** */
t_2_stcks				ft_do_instrs(t_2_stcks stcks, char *instr, size_t n_s);
t_2_stcks				ft_gt_stcks(int ac, char **av);
/* ************************************************************************** */
void					ft_lstadd_1(t_lst_psh_swp_1 **alst, t_lst_psh_swp_1 *new);
void					ft_lstdel_1(t_lst_psh_swp_1 **alst, void (*del)(int, int, int));
void					ft_lstdelone_1(t_lst_psh_swp_1 **alst, void (*del)(int, int, int));
void					ft_del_1(int nmbr, int indx, int rslt);
void					ft_free_1(t_lst_psh_swp_1 *stck_a, t_lst_psh_swp_1 *stck_b);
void					ft_del(void *content, size_t content_size);
void					ft_error(t_list *stck_a,t_list *stck_b);
void					ft_error_1();
void					ft_free(t_list *stck_a, t_list *stck_b);
/* ************************************************************************** */
int						ft_chck_arg(int intgr, const char *strng);
int						ft_is_dplcts(int ac,char **av);
int						ft_is_stack_clear(t_lst_psh_swp_1 *stck);
/* ************************************************************************** */

#endif
