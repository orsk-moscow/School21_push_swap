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
typedef struct			s_num_ind_res
{
	int						num;
	int						ind;
	int						res;
}						t_num_ind_res;
/* ************************************************************************** */
typedef struct			s_lst_p_s
{
	t_num_ind_res			el;
	struct s_lst_p_s		*nxt;
}						t_lst_p_s;
/* ************************************************************************** */
typedef struct			s_2_stcks
{
	t_list					*a;
	t_list					*b;
}						t_2_stcks;
/* ************************************************************************** */
typedef struct			s_res_mrkp
{
	t_lst_p_s				*lst;
	int						els_n;
	int						head;
	char					*mode;
}						t_res_mrkp;
/* ************************************************************************** */
typedef struct			s_stcks
{
	t_res_mrkp				*a;
	t_res_mrkp				*b;
}						t_stcks;
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
t_2_stcks				ft_do_instrs(t_2_stcks stcks, char *instr, size_t n_s);
t_2_stcks				ft_gt_stcks(int ac, char **av);
/* ************************************************************************** */
t_lst_p_s				*ft_lstnew_1(int num, int ind);
t_lst_p_s				*ft_clct_inds(t_lst_p_s *stck);
/* ************************************************************************** */
t_res_mrkp				*ft_mark_in_ind_md(t_res_mrkp *stck, t_res_mrkp *ind);
t_res_mrkp				*ft_mark_in_grtr_md(t_res_mrkp *stck, t_res_mrkp *grtr);
t_res_mrkp				*ft_do_mode_grtr(t_lst_p_s *mode_grtr, int els_n, int head);
t_res_mrkp				*ft_do_mode_ind(t_lst_p_s *mode_ind, int els_n, int head);
t_res_mrkp				*ft_init_stck();
/* ************************************************************************** */
t_stcks					*ft_do_markup(t_stcks *stcks);
t_stcks					*ft_gt_stcks_1(int ac, char **av);
t_stcks					*ft_do_sa_1(t_stcks *stcks);
t_stcks					*ft_do_pb_1(t_stcks *stcks);
t_stcks					*ft_do_ra_1(t_stcks *stcks);
t_stcks					*ft_do_ra_1_slnt(t_stcks *stcks);
t_stcks					*ft_do_rra_1(t_stcks *stcks);
t_stcks					*ft_do_rra_1_slnt(t_stcks *stcks);
t_stcks					*ft_do_pa_1(t_stcks *stcks);
t_stcks					*ft_do_rb_1(t_stcks *stcks);
t_stcks					*ft_do_rrb_1(t_stcks *stcks);
t_stcks					*ft_do_rb_1_slnt(t_stcks *stcks);
t_stcks					*ft_align_a(t_stcks *stcks, int els_n);
t_stcks					*ft_do_from_a_to_b(t_stcks *stcks);
t_stcks					*ft_do_from_b_to_a(t_stcks *stcks, int els_b, int els_a);
t_stcks					*ft_do_rrb_n_slnt(t_stcks *stcks, int n);
t_stcks					*ft_do_rb_n_slnt(t_stcks *stcks, int n);
t_stcks					*ft_do_rra_n_slnt(t_stcks *stcks, int n);
t_stcks					*ft_do_rra_n(t_stcks *stcks, int n);
t_stcks					*ft_do_ra_n_slnt(t_stcks *stcks, int n);
t_stcks					*ft_do_ra_n(t_stcks *stcks, int n);
t_stcks					*ft_do_rrb_1_slnt(t_stcks *stcks);
/* ************************************************************************** */
void					ft_lstadd_1(t_lst_p_s **alst, t_lst_p_s *new);
void					ft_lstdel_1(t_lst_p_s **alst, void (*del)(int, int, int));
void					ft_lstdelone_1(t_lst_p_s **alst, void (*del)(int, int, int));
void					ft_del_1(int num, int ind, int res);
void					ft_del(void *content, size_t content_size);
void					ft_error(t_list *stck_a,t_list *stck_b);
void					ft_error_1();
void					ft_free(t_list *stck_a, t_list *stck_b);
void					ft_prnt_rr_n(int nb, int na);
void					ft_prnt_rrr_n(int nb, int na);
void					ft_prnt_rrb_n(int n);
void					ft_prnt_rb_n(int n);
void					ft_prnt_ra_n(int n);
void					ft_prnt_rra_n(int n);
/* ************************************************************************** */
int						ft_chck_arg(int intgr, const char *strng);
int						ft_is_dplcts(int ac,char **av);
int						ft_is_stack_clear(t_lst_p_s *stck);
int						ft_is_sa_needed(t_stcks *stcks);
int						ft_clt_stps_a(t_lst_p_s *srtd_stck, int num);
int						ft_fnd_min(t_lst_p_s *stck);
int						ft_r_vs_rr(int ind, int elmts);
int						ft_r_vs_rr_2(int ind, int elmts);
int						ft_do_mode_grtr_2(t_res_mrkp *mode_grtr);
/* ************************************************************************** */
size_t					ft_lstlen_1(t_lst_p_s *lst);

#endif
