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
t_stcks					*do_fr_b_to_a(t_stcks *s, int b, int a)
{
	t_lst_p_s				*t1;
	int						t2;
	t_lst_p_s				*t3;
	int						t4;
	int						t5;

	t1 = s->b->lst;
	t2 = 0;
	t3 = s->b->lst;
	t4 = b;
	while (t1 && (t1->el.ind = ft_clt_stps_a(s->a->lst, t1->el.num)) > -2 &&
		(t1->el.res = ft_r_vs_rr(t2, b) + ft_r_vs_rr(t1->el.ind, a)) > -1 &&
		(t5 = (t4 < t1->el.res ? t5 : t2)) > -2 &&
		(t4 = ((t2++ > -2) && (t4 < t1->el.res) ? t4 : t1->el.res)) > -2)
		t1 = t1->nxt;
	s->b->lst = t3;
	t2 = ft_r_vs_rr_2(t5, b);
	t4 = (t2 ? b - t5 : t5);
	s = (t2 ? rrb_n_s(s, b - t5) : rb_n_s(s, t5));
	b = ft_r_vs_rr_2(s->b->lst->el.ind, a);
	t5 = (b ? a - s->b->lst->el.ind : s->b->lst->el.ind);
	s = (b ? rra_n_s(s, a - s->b->lst->el.ind) : ra_n_s(s, s->b->lst->el.ind));
	ft_prnt(t2, b, t4, t5);
	return (do_pa_1(s));
}

/* ************************************************************************** */
t_stcks					*do_fr_a_to_b(t_stcks *stcks)
{
	while (!ft_is_stack_clear(stcks->a->lst))
	{
		if (ft_is_sa_needed(stcks))
		{
			stcks = do_sa_1(stcks);
			stcks->a->lst->nxt->el.res = 0;
		}
		else if (!stcks->a->lst->el.res)
		{
			stcks = do_pb_1(stcks);
		}
		else
		{
			stcks = ra_1(stcks);
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
			ra_n(stcks, ind_min) :
			rra_n(stcks, els_n - ind_min));
	return (stcks);
}
