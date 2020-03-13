#include "../includes/push_swap.h"

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
t_2_stcks_1				*ft_do_ra_n_slnt(t_2_stcks_1 *stcks, int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		stcks = ft_do_ra_1_slnt(stcks);
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
