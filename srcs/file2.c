#include "../includes/push_swap.h"
/* ************************************************************************** */
void					ft_prnt_ra_n(int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		ft_putstr("ra\n");
}

/* ************************************************************************** */
void					ft_prnt_rra_n(int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		ft_putstr("rra\n");
}

/* ************************************************************************** */
void					ft_prnt_rb_n(int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		ft_putstr("rb\n");
}

/* ************************************************************************** */
t_2_stcks_1				*ft_do_ra_n(t_2_stcks_1 *stcks, int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		stcks = ft_do_ra_1(stcks);
	return (stcks);
}

/* ************************************************************************** */
int						ft_do_mode_grtr_2(t_rlst_markup *mode_grtr)
{
	int						tmp1;
	t_lst_psh_swp_1			*tmp2;

	tmp1 = mode_grtr->head;
	tmp2 = mode_grtr->lst;
	if (!tmp2 || !tmp2->nxt || !tmp2->nxt->nxt)
		return (0);
	if (!tmp2 || !tmp2->nxt || !tmp2->nxt->nxt)
		return (0);
	if (tmp2->el.indx == tmp1 ||
		tmp2->nxt ->el.indx != tmp1)
		return (0);
	if (tmp2->el.nmbr > tmp2->nxt->el.nmbr &&
		tmp2->el.nmbr < tmp2->nxt->nxt->el.nmbr)
		return (1);
	return (0);
}
