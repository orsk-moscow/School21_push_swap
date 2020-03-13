#include "../includes/push_swap.h"

/* ************************************************************************** */
t_stcks					*ft_do_markup(t_stcks *stcks)
{
	t_res_mrkp				*md_grtr;
	t_res_mrkp				*md_ind;

	md_grtr = stcks->a;
	md_ind = stcks->a;
	md_grtr = ft_do_md_grtr(md_grtr->lst,0,0);
	md_ind->els_n = 1;
	md_ind->hd = md_ind->lst->el.ind;
	md_ind = ft_do_md_ind(md_ind->lst,0,0);
	stcks->a = (md_ind->els_n >= md_grtr->els_n ?
		ft_mark_in_ind_md(stcks->a, md_ind) :
		ft_mark_in_grtr_md(stcks->a, md_grtr));
	stcks->b = ft_init_stck();
	return (stcks);
}

/* ************************************************************************** */
int						ft_is_stack_clear(t_lst_p_s *stck)
{
	while (stck)
	{
		if (stck->el.res != 1)
			return (0);
		stck = stck->nxt;
	}
	return (1);
}

/* ************************************************************************** */
t_stcks					*ft_do_rb_n_slnt(t_stcks *stcks, int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		stcks = ft_do_rb_1_slnt(stcks);
	return (stcks);
}

/* ************************************************************************** */
t_stcks					*ft_do_ra_n_slnt(t_stcks *stcks, int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		stcks = ft_do_ra_1_slnt(stcks);
	return (stcks);
}

/* ************************************************************************** */
int						ft_clt_stps_a(t_lst_p_s *srtd_stck, int num)
{
	int						tmp1;
	int						tmp2;
	t_lst_p_s				*tmp3;

	tmp2 = 0;
	tmp3 = srtd_stck;
	while(tmp3)
	{
		tmp1 = tmp3->el.num;
		tmp3 = tmp3->nxt;
		tmp2++;
		if (tmp3 && ((tmp3->el.num > num && num > tmp1 && tmp3->el.num > tmp1) || (
			tmp3->el.num > num && num < tmp1 && tmp3->el.num < tmp1) || (
			tmp3->el.num < num && num > tmp1 && tmp3->el.num < tmp1)))
			break;
	}
	return (tmp2);
}
