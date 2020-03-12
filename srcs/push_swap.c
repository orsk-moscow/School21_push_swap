#include "../includes/push_swap.h"

/* ************************************************************************** */
int						ft_do_mode_grtr_2(t_rlst_markup *mode_grtr)
{
	int						tmp1;
	t_lst_psh_swp_1			*tmp2;

	tmp1 = mode_grtr->head;
	tmp2 = mode_grtr->lst;
	if (!tmp2 || !tmp2->next || !tmp2->next->next)
		return (0);
	if (!tmp2 || !tmp2->next || !tmp2->next->next)
		return (0);
	if (tmp2->elmnt.indx == tmp1 ||
		tmp2->next ->elmnt.indx != tmp1)
		return (0);
	if (tmp2->elmnt.nmbr > tmp2->next->elmnt.nmbr &&
		tmp2->elmnt.nmbr < tmp2->next->next->elmnt.nmbr)
		return (1);
	return (0);
}

/* ************************************************************************** */
int						ft_is_sa_needed(t_2_stcks_1 *stcks)
{
	return (ft_strcmp(stcks->a->mode,"grtr") ?
		ft_do_mode_grtr_2(stcks->a) : 0);
}

/* ************************************************************************** */
int						ft_clt_stps_a(t_lst_psh_swp_1 *srtd_stck, int nmbr)
{
	int						tmp1;
	int						tmp2;
	t_lst_psh_swp_1			*tmp3;

	tmp2 = 0;
	tmp3 = srtd_stck;
	while(tmp3)
	{
		tmp1 = tmp3->elmnt.nmbr;
		tmp3 = tmp3->next;
		tmp2++;
		if (tmp3 && ((tmp3->elmnt.nmbr > nmbr && nmbr > tmp1 && tmp3->elmnt.nmbr > tmp1) || (
			tmp3->elmnt.nmbr > nmbr && nmbr < tmp1 && tmp3->elmnt.nmbr < tmp1) || (
			tmp3->elmnt.nmbr < nmbr && nmbr > tmp1 && tmp3->elmnt.nmbr < tmp1)))
			break;
	}
	return (tmp2);
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

/* ************************************************************************** */
t_2_stcks_1				*ft_do_rrb_n_slnt(t_2_stcks_1 *stcks, int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		stcks = ft_do_rrb_1_slnt(stcks);
	return (stcks);
}

/* ************************************************************************** */
t_2_stcks_1				*ft_do_rb_n_slnt(t_2_stcks_1 *stcks, int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		stcks = ft_do_rb_1_slnt(stcks);
	return (stcks);
}

/* ************************************************************************** */
t_2_stcks_1				*ft_do_rrb_n(t_2_stcks_1 *stcks, int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		stcks = ft_do_rrb_1(stcks);
	return (stcks);
}

/* ************************************************************************** */
t_2_stcks_1				*ft_do_rb_n(t_2_stcks_1 *stcks, int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		stcks = ft_do_rb_1(stcks);
	return (stcks);
}

/* ************************************************************************** */
t_2_stcks_1				*ft_do_rra_n_slnt(t_2_stcks_1 *stcks, int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		stcks = ft_do_rra_1_slnt(stcks);
	return (stcks);
}

/* ************************************************************************** */
t_2_stcks_1				*ft_do_ra_n_slnt(t_2_stcks_1 *stcks, int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		stcks = ft_do_ra_1_slnt(stcks);
	return (stcks);
}

/* ************************************************************************** */
t_2_stcks_1				*ft_do_rra_n(t_2_stcks_1 *stcks, int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		stcks = ft_do_rra_1(stcks);
	return (stcks);
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
int						main(int ac, char **av)
{
	t_2_stcks_1				*stcks;
	int						elmnts_b;

	if (ft_is_dplcts(ac, av))
		ft_error_1();
	stcks = ft_gt_stcks_1(ac, av);
	stcks->a->lst = ft_clct_indxs(stcks->a->lst);
	stcks = ft_do_markup(stcks);
	elmnts_b = --ac - stcks->a->elmnts_in;
	ac = stcks->a->elmnts_in;
	stcks = ft_do_from_a_to_b(stcks);
	while (stcks->b->lst)
		stcks = ft_do_from_b_to_a(stcks, elmnts_b--, ac++);
	stcks = ft_align_a(stcks, ac);
	exit(0);
}
