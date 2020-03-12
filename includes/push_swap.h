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
typedef struct			s_rlst_markup
{
	t_lst_psh_swp_1			*lst;
	int						elmnts_in;
	int						head;
	char					*mode;
}						t_rlst_markup;
/* ************************************************************************** */
typedef struct			s_2_stcks_1
{
	t_rlst_markup			*a;
	t_rlst_markup			*b;
}						t_2_stcks_1;
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
t_lst_psh_swp_1			*ft_lstnew_1(int nmbr, int indx);
t_lst_psh_swp_1			*ft_clct_indxs(t_lst_psh_swp_1 *stck);
/* ************************************************************************** */
t_rlst_markup			*ft_mark_in_indx_md(t_rlst_markup *stck, t_rlst_markup *indx);
t_rlst_markup			*ft_mark_in_grtr_md(t_rlst_markup *stck, t_rlst_markup *grtr);
t_rlst_markup			*ft_do_mode_grtr(t_lst_psh_swp_1 *mode_grtr, int elmnts_in, int head);
t_rlst_markup			*ft_do_mode_indx(t_lst_psh_swp_1 *mode_indx, int elmnts_in, int head);
t_rlst_markup			*ft_init_stck();
/* ************************************************************************** */
t_2_stcks_1				*ft_do_markup(t_2_stcks_1 *stcks);
t_2_stcks_1				*ft_gt_stcks_1(int ac, char **av);
t_2_stcks_1				*ft_do_sa_1(t_2_stcks_1 *stcks);
t_2_stcks_1				*ft_do_pb_1(t_2_stcks_1 *stcks);
t_2_stcks_1				*ft_do_ra_1(t_2_stcks_1 *stcks);
t_2_stcks_1				*ft_do_ra_1_slnt(t_2_stcks_1 *stcks);
t_2_stcks_1				*ft_do_rra_1(t_2_stcks_1 *stcks);
t_2_stcks_1				*ft_do_rra_1_slnt(t_2_stcks_1 *stcks);
t_2_stcks_1				*ft_do_pa_1(t_2_stcks_1 *stcks);
t_2_stcks_1				*ft_do_rb_1(t_2_stcks_1 *stcks);
t_2_stcks_1				*ft_do_rrb_1(t_2_stcks_1 *stcks);
t_2_stcks_1				*ft_do_rrb_1_slnt(t_2_stcks_1 *stcks);
t_2_stcks_1				*ft_do_rrr_1(t_2_stcks_1 *stcks);
t_2_stcks_1				*ft_do_rr_1(t_2_stcks_1 *stcks);
t_2_stcks_1				*ft_do_rb_1_slnt(t_2_stcks_1 *stcks);
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
int						ft_is_sa_needed(t_2_stcks_1 *stcks);
int						ft_clt_stps_a(t_lst_psh_swp_1 *srtd_stck, int nmbr);
/* ************************************************************************** */
size_t					ft_lstlen_1(t_lst_psh_swp_1 *lst);

#endif
