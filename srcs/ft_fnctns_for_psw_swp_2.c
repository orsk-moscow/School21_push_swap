#include "../includes/push_swap.h"

/* ************************************************************************** */
t_2_stcks_1				*ft_do_markup(t_2_stcks_1 *stcks)
{
	t_rlst_markup			*mode_grtr;
	t_rlst_markup			*mode_indx;

	mode_grtr = stcks->a;
	mode_indx = stcks->a;
	mode_grtr = ft_do_mode_grtr(mode_grtr->lst,0,0);
	mode_indx->els_in = 1;
	mode_indx->head = mode_indx->lst->el.indx;
	mode_indx = ft_do_mode_indx(mode_indx->lst,0,0);
	stcks->a = (mode_indx->els_in >= mode_grtr->els_in ?
		ft_mark_in_indx_md(stcks->a, mode_indx) :
		ft_mark_in_grtr_md(stcks->a, mode_grtr));
	stcks->b = ft_init_stck();
	return (stcks);
}

/* ************************************************************************** */
int						ft_is_stack_clear(t_lst_psh_swp_1 *stck)
{
	while (stck)
	{
		if (stck->el.rslt != 1)
			return (0);
		stck = stck->nxt;
	}
	return (1);
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
int						ft_clt_stps_a(t_lst_psh_swp_1 *srtd_stck, int nmbr)
{
	int						tmp1;
	int						tmp2;
	t_lst_psh_swp_1			*tmp3;

	tmp2 = 0;
	tmp3 = srtd_stck;
	while(tmp3)
	{
		tmp1 = tmp3->el.nmbr;
		tmp3 = tmp3->nxt;
		tmp2++;
		if (tmp3 && ((tmp3->el.nmbr > nmbr && nmbr > tmp1 && tmp3->el.nmbr > tmp1) || (
			tmp3->el.nmbr > nmbr && nmbr < tmp1 && tmp3->el.nmbr < tmp1) || (
			tmp3->el.nmbr < nmbr && nmbr > tmp1 && tmp3->el.nmbr < tmp1)))
			break;
	}
	return (tmp2);
}
