#include "../includes/push_swap.h"

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
t_stcks					*ft_do_from_b_to_a(t_stcks *stcks, int els_b, int els_a)
{
	t_lst_p_s				*tmp1;
	int						tmp2;
	t_lst_p_s				*tmp3;
	int						tmp4_min;
	int						tmp5_min_ind;
	int						rrb;
	int						rra;
	int						n_b;
	int						n_a;

	tmp1 = stcks->b->lst;
	tmp2 = 0;
	tmp3 = stcks->b->lst;
	tmp4_min = els_b;
	while (tmp1)
	{
		tmp1->el.ind = ft_clt_stps_a(stcks->a->lst,
										tmp1->el.num);
		tmp1->el.res = ft_r_vs_rr(tmp2, els_b) + ft_r_vs_rr(tmp1->el.ind, els_a);
		tmp5_min_ind = (tmp4_min < tmp1->el.res ? tmp5_min_ind : tmp2);
		tmp4_min = (tmp4_min < tmp1->el.res ? tmp4_min : tmp1->el.res);
		tmp1 = tmp1->nxt;
		tmp2++;
	}
	stcks->b->lst = tmp3;

	rrb = ft_r_vs_rr_2(tmp5_min_ind, els_b);
	n_b = (rrb ?
		els_b - tmp5_min_ind :
		tmp5_min_ind);
	stcks = (rrb ?
			ft_do_rrb_n_slnt(stcks, els_b - tmp5_min_ind) :
			ft_do_rb_n_slnt(stcks, tmp5_min_ind));
	rra = ft_r_vs_rr_2(stcks->b->lst->el.ind, els_a);
	n_a = (rra ?
		els_a - stcks->b->lst->el.ind :
		stcks->b->lst->el.ind);
	stcks = (rra ?
			ft_do_rra_n_slnt(stcks, els_a - stcks->b->lst->el.ind) :
			ft_do_ra_n_slnt(stcks, stcks->b->lst->el.ind));
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
t_stcks					*ft_do_from_a_to_b(t_stcks *stcks)
{
	while (!ft_is_stack_clear(stcks->a->lst))
	{
		if (ft_is_sa_needed(stcks))
		{
			stcks = ft_do_sa_1(stcks);
			stcks->a->lst->nxt->el.res = 0;
		}
		else if (!stcks->a->lst->el.res)
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
int						ft_fnd_min(t_lst_p_s *stck)
{
	int						tmp3;
	int						tmp4_ind_min;
	int						tmp5_min;

	tmp5_min = INT_MAX;
	tmp3 = 0;
	while (stck)
	{
		tmp4_ind_min = (tmp5_min < stck->el.num ? tmp4_ind_min : tmp3);
		tmp5_min = (tmp5_min < stck->el.num ? tmp5_min : stck->el.num);
		stck = stck->nxt;
		tmp3++;
	}
	return (tmp4_ind_min);
}

/* ************************************************************************** */
t_stcks					*ft_align_a(t_stcks *stcks, int els_n)
{
	int						ind_min;

	ind_min = ft_fnd_min(stcks->a->lst);
	stcks = (ind_min < els_n / 2 ?
			ft_do_ra_n(stcks, ind_min) :
			ft_do_rra_n(stcks, els_n - ind_min));
	return (stcks);
}
