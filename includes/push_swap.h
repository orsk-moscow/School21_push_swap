/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:10:43 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/18 11:46:35 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define SIZE 1000000
# include "../libft/libft.h"

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>
# include <limits.h>

typedef struct			s_num_ind_res
{
	int						num;
	int						ind;
	int						res;
}						t_num_ind_res;
typedef struct			s_lst_p_s
{
	t_num_ind_res			el;
	struct s_lst_p_s		*nxt;
}						t_lst_p_s;
typedef struct			s_2_stcks
{
	t_list					*a;
	t_list					*b;
}						t_2_stcks;
typedef struct			s_res_mrkp
{
	t_lst_p_s				*lst;
	int						els_n;
	int						hd;
	char					*md;
}						t_res_mrkp;
typedef struct			s_stcks
{
	t_res_mrkp				*a;
	t_res_mrkp				*b;
}						t_stcks;
t_2_stcks				do_sa(t_2_stcks stcks);
t_2_stcks				do_sb(t_2_stcks stcks);
t_2_stcks				do_ss(t_2_stcks stcks);
t_2_stcks				do_pa(t_2_stcks stcks);
t_2_stcks				do_pb(t_2_stcks stcks);
t_2_stcks				ra(t_2_stcks stcks);
t_2_stcks				rb(t_2_stcks stcks);
t_2_stcks				rr(t_2_stcks stcks);
t_2_stcks				rra(t_2_stcks stcks);
t_2_stcks				rrb(t_2_stcks stcks);
t_2_stcks				rrr(t_2_stcks stcks);
t_2_stcks				do_instrs(t_2_stcks stcks, char *instr, size_t n_s);
t_2_stcks				ft_gt_stcks(int ac, char **av);
t_lst_p_s				*ft_lstnew_1(int num, int ind);
t_lst_p_s				*ft_clct_inds(t_lst_p_s *stck);
t_res_mrkp				*ft_mark_in_ind_md(t_res_mrkp *stck, t_res_mrkp *ind);
t_res_mrkp				*ft_mark_in_grtr_md(t_res_mrkp *stck, t_res_mrkp *grtr);
t_res_mrkp				*do_md_grtr(t_lst_p_s *md_grtr, int els_n, int hd);
t_res_mrkp				*do_md_ind(t_lst_p_s *md_ind, int els_n, int hd);
t_res_mrkp				*ft_init_stck(void);
t_res_mrkp				*ft_init_res(t_lst_p_s *md_grtr);
t_res_mrkp				*ft_init_md_ind(int els_n, int hd);
t_stcks					*do_markup(t_stcks *stcks);
t_stcks					*ft_gt_stcks_1(int ac, char **av);
t_stcks					*do_sa_1(t_stcks *stcks);
t_stcks					*do_pb_1(t_stcks *stcks);
t_stcks					*ra_1(t_stcks *stcks);
t_stcks					*ra_1_s(t_stcks *stcks);
t_stcks					*rra_1(t_stcks *stcks);
t_stcks					*rra_1_s(t_stcks *stcks);
t_stcks					*do_pa_1(t_stcks *stcks);
t_stcks					*rb_1(t_stcks *stcks);
t_stcks					*rrb_1(t_stcks *stcks);
t_stcks					*rb_1_s(t_stcks *stcks);
t_stcks					*ft_align_a(t_stcks *stcks, int els_n);
t_stcks					*do_fr_a_to_b(t_stcks *stcks);
t_stcks					*do_fr_b_to_a(t_stcks *stcks, int els_b, int els_a);
t_stcks					*rrb_n_s(t_stcks *stcks, int n);
t_stcks					*rb_n_s(t_stcks *stcks, int n);
t_stcks					*rra_n_s(t_stcks *stcks, int n);
t_stcks					*rra_n(t_stcks *stcks, int n);
t_stcks					*ra_n_s(t_stcks *stcks, int n);
t_stcks					*ra_n(t_stcks *stcks, int n);
t_stcks					*rrb_1_s(t_stcks *stcks);
void					ft_lstadd_1(t_lst_p_s **alst, t_lst_p_s *new);
void					ft_lstdel_1(t_lst_p_s **alst,
						void (*del)(int, int, int));
void					ft_lstdelone_1(t_lst_p_s **alst,
						void (*del)(int, int, int));
void					ft_del_1(int num, int ind, int res);
void					ft_del(void *content, size_t content_size);
int						ft_error(void);
int						ft_error_1(void);
void					ft_free(t_list *stck_a, t_list *stck_b);
void					ft_prnt_rr_n(int nb, int na);
void					ft_prnt_rrr_n(int nb, int na);
void					ft_prnt_rrb_n(int n);
void					ft_prnt_rb_n(int n);
void					ft_prnt_ra_n(int n);
void					ft_prnt_rra_n(int n);
void					ft_prnt(int tmp2, int els_b, int tmp4, int tmp5);
int						ft_chck_arg(int intgr, const char *strng);
int						ft_is_dplcts(int ac, char **av);
int						ft_is_stack_clear(t_lst_p_s *stck);
int						ft_is_sa_needed(t_stcks *stcks);
int						ft_clt_stps_a(t_lst_p_s *srtd_stck, int num);
int						ft_fnd_min(t_lst_p_s *stck);
int						ft_r_vs_rr(int ind, int elmts);
int						ft_r_vs_rr_2(int ind, int elmts);
int						do_md_grtr_2(t_res_mrkp *md_grtr);
size_t					ft_lstlen_1(t_lst_p_s *lst);

#endif
