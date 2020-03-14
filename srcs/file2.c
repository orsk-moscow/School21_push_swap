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
t_stcks					*ra_n(t_stcks *stcks, int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		stcks = ra_1(stcks);
	return (stcks);
}

/* ************************************************************************** */
int						do_md_grtr_2(t_res_mrkp *md_grtr)
{
	int						tmp1;
	t_lst_p_s				*tmp2;

	tmp1 = md_grtr->hd;
	tmp2 = md_grtr->lst;
	if (!tmp2 || !tmp2->nxt || !tmp2->nxt->nxt)
		return (0);
	if (!tmp2 || !tmp2->nxt || !tmp2->nxt->nxt)
		return (0);
	if (tmp2->el.ind == tmp1 ||
		tmp2->nxt ->el.ind != tmp1)
		return (0);
	if (tmp2->el.num > tmp2->nxt->el.num &&
		tmp2->el.num < tmp2->nxt->nxt->el.num)
		return (1);
	return (0);
}
