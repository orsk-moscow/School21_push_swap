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
int						ft_r_vs_rr(int ind, int elmts)
{
	return ((ind > elmts / 2) ?
			elmts - ind :
			ind);
}

/* ************************************************************************** */
int						ft_r_vs_rr_2(int ind, int elmts)
{
	int						rr;
	int						r;

	rr = 1;
	r = 0;
	return ((ind > elmts / 2) ?
			rr :
			r);
}
