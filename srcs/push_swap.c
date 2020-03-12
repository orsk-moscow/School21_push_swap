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
	return(ft_strcmp(stcks->a->mode,"grtr") ?
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
void					ft_prnt_rrb_n(int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		ft_putstr("rrb\n");
}

/* ************************************************************************** */
void					ft_prnt_rrr_n(int nb, int na)
{
	int						itrtr1;
	int						min_n;
	int						max_n;

	itrtr1 = 0;
	min_n = (na > nb ? nb : na);
	max_n = (na > nb ? na : nb);
	while (itrtr1 < min_n)
	{
		ft_putstr("rrr\n");
		itrtr1++;
	}
	while (itrtr1 < max_n)
	{
		na < max_n ? ft_putstr("rrb\n") : ft_putstr("rra\n");
		itrtr1++;
	}
}

/* ************************************************************************** */
void					ft_prnt_rr_n(int nb, int na)
{
	int						itrtr1;
	int						min_n;
	int						max_n;

	itrtr1 = 0;
	min_n = (na > nb ? nb : na);
	max_n = (na > nb ? na : nb);
	while (itrtr1 < min_n)
	{
		ft_putstr("rr\n");
		itrtr1++;
	}
	while (itrtr1 < max_n)
	{
		na < max_n ? ft_putstr("rb\n") : ft_putstr("ra\n");
		itrtr1++;
	}
}

/* ************************************************************************** */
t_2_stcks_1				*ft_do_from_b_to_a(t_2_stcks_1 *stcks, int elmnts_b, int elmnts_a)
{
	t_lst_psh_swp_1			*tmp1;
	int						tmp2;
	t_lst_psh_swp_1			*tmp3;
	int						tmp4_min;
	int						tmp5_min_indx;
	int						rrb;
	int						rra;
	int						n_b;
	int						n_a;

	tmp1 = stcks->b->lst;
	tmp2 = 0;
	tmp3 = stcks->b->lst;
	tmp4_min = elmnts_b;
	while (tmp1)
	{
		tmp1->elmnt.indx = ft_clt_stps_a(stcks->a->lst,
										tmp1->elmnt.nmbr);
		tmp1->elmnt.rslt = ft_r_vs_rr(tmp2, elmnts_b) + ft_r_vs_rr(tmp1->elmnt.indx, elmnts_a);
		tmp5_min_indx = (tmp4_min < tmp1->elmnt.rslt ? tmp5_min_indx : tmp2);
		tmp4_min = (tmp4_min < tmp1->elmnt.rslt ? tmp4_min : tmp1->elmnt.rslt);
		tmp1 = tmp1->next;
		tmp2++;
	}
	stcks->b->lst = tmp3;

	rrb = ft_r_vs_rr_2(tmp5_min_indx, elmnts_b);
	n_b = (rrb ?
		elmnts_b - tmp5_min_indx :
		tmp5_min_indx);
	stcks = (rrb ?
			ft_do_rrb_n_slnt(stcks, elmnts_b - tmp5_min_indx) :
			ft_do_rb_n_slnt(stcks, tmp5_min_indx));
	rra = ft_r_vs_rr_2(stcks->b->lst->elmnt.indx, elmnts_a);
	n_a = (rra ?
		elmnts_a - stcks->b->lst->elmnt.indx :
		stcks->b->lst->elmnt.indx);
	stcks = (rra ?
			ft_do_rra_n_slnt(stcks, elmnts_a - stcks->b->lst->elmnt.indx) :
			ft_do_ra_n_slnt(stcks, stcks->b->lst->elmnt.indx));
	if (rrb && rra)
		ft_prnt_rrr_n(n_b, n_a);
	else if (!rrb && !rra)
		ft_prnt_rr_n(n_b, n_a);
	else
	{
		rrb ? ft_prnt_rrb_n(n_b) : ft_prnt_rb_n(n_b);
		rra ? ft_prnt_rra_n(n_a) : ft_prnt_ra_n(n_a);
	}
	stcks = ft_do_pa_1(stcks);
	return (stcks);
}

/* ************************************************************************** */
t_2_stcks_1				*ft_do_from_a_to_b(t_2_stcks_1 *stcks)
{
	while (!ft_is_stack_clear(stcks->a->lst))
	{
		if (ft_is_sa_needed(stcks))
		{
			stcks = ft_do_sa_1(stcks);
			stcks->a->lst->next->elmnt.rslt = 0;
		}
		else if (!stcks->a->lst->elmnt.rslt)
		{
			stcks = ft_do_pb_1(stcks);
		}
		else
		{
			stcks = ft_do_ra_1(stcks);
		}
	}
	return (stcks);
}

/* ************************************************************************** */
int						ft_fnd_min(t_lst_psh_swp_1 *stck)
{
	int						tmp3;
	int						tmp4_indx_min;
	int						tmp5_min;
 
	tmp5_min = INT_MAX;
	tmp3 = 0;
	while (stck)
	{
		tmp4_indx_min = (tmp5_min < stck->elmnt.nmbr ? tmp4_indx_min : tmp3);
		tmp5_min = (tmp5_min < stck->elmnt.nmbr ? tmp5_min : stck->elmnt.nmbr);
		stck = stck->next;
		tmp3++;
	}
	return (tmp4_indx_min);
}

/* ************************************************************************** */
t_2_stcks_1				*ft_align_a(t_2_stcks_1 *stcks, int elmnts_n)
{
	int						indx_min;

	indx_min = ft_fnd_min(stcks->a->lst);
	stcks = (indx_min < elmnts_n / 2 ?
			ft_do_ra_n(stcks, indx_min) :
			ft_do_rra_n(stcks, elmnts_n - indx_min));
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
