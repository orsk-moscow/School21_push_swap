#include "../includes/push_swap.h"

/* ************************************************************************** */
void					ft_free(t_list *stck_a, t_list *stck_b)
{
	if (stck_a)
		ft_lstdel(&stck_a, ft_del);
	if (stck_b)
		ft_lstdel(&stck_b, ft_del);
}

/* ************************************************************************** */
void					ft_free_1(t_lst_psh_swp_1 *stck_a, t_lst_psh_swp_1 *stck_b)
{
	if (stck_a)
		ft_lstdel_1(&stck_a, ft_del_1);
	if (stck_b)
		ft_lstdel_1(&stck_b, ft_del_1);
}

/* ************************************************************************** */
int						ft_r_vs_rr(int indx, int elmts)
{
	return ((indx > elmts / 2) ?
			elmts - indx :
			indx);
}

/* ************************************************************************** */
int						ft_r_vs_rr_2(int indx, int elmts)
{
	int						rr;
	int						r;

	rr = 1;
	r = 0;
	return ((indx > elmts / 2) ?
			rr :
			r);
}
