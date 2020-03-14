#include "../includes/push_swap.h"

/* ************************************************************************** */
t_lst_p_s				*ft_clct_inds(t_lst_p_s *stck)
{
	int						ind;
	t_lst_p_s				*tmp1;
	t_lst_p_s				*tmp2;

	tmp1 = stck;
	while (tmp1)
	{
		ind = 0;
		tmp2 = stck;
		while (tmp2)
		{
			if (tmp1->el.num > tmp2->el.num)
				ind++;
			tmp2 = tmp2->nxt;
		}
		tmp1->el.ind = ind;
		tmp1 = tmp1->nxt;
	}
	return (stck);
}

/* ************************************************************************** */
t_res_mrkp				*do_md_grtr(t_lst_p_s *md_grtr, int els_n, int hd)
{
	t_res_mrkp				*res;

	if (!md_grtr->nxt)
		return (ft_init_res(md_grtr));
	res = do_md_grtr(md_grtr->nxt, els_n, hd);
	if (md_grtr->el.num < res->lst->el.num)
	{
		md_grtr->el.res = res->lst->el.res + 1;
		if (md_grtr->el.res > res->els_n && (hd = md_grtr->el.ind) >= INT_MIN)
			els_n = md_grtr->el.res;
		else if (md_grtr->el.res == res->els_n &&
			md_grtr->el.ind < res->lst->el.ind)
			hd = md_grtr->el.ind;
		else if ((els_n = res->els_n) > -1)
			hd = res->hd;
	}
	else if ((md_grtr->el.res = 1) &&
			(els_n = res->els_n) > -2)
		hd = res->hd;
	res->hd = hd;
	res->els_n = els_n;
	res->lst = md_grtr;
	return (res);
}

/* ************************************************************************** */
t_res_mrkp				*ft_init_md_ind(int els_n, int hd)
{
	t_res_mrkp				*tmp1;

	if (!(tmp1 = (t_res_mrkp*)malloc(sizeof(t_res_mrkp*))))
		ft_error_1();
	tmp1->els_n = els_n;
	tmp1->hd = hd;
	tmp1->lst = NULL;
	return (tmp1);
}

/* ************************************************************************** */
t_res_mrkp				*do_md_ind(t_lst_p_s *md_ind, int els_n, int hd)
{
	int						tmp2;
	t_lst_p_s				*tmp3;

	if (!md_ind)
		return (ft_init_md_ind(els_n, hd));
	tmp2 = md_ind->el.ind;
	md_ind->el.res = 1;
	tmp3 = md_ind;
	while (tmp3)
	{
		if (tmp3->el.ind == tmp2 + 1 && ++tmp2)
			(md_ind->el.res)++;
		tmp3 = tmp3->nxt;
	}
	if (md_ind->el.res > els_n || (
		md_ind->el.res == els_n && md_ind->el.ind < hd))
	{
		hd = md_ind->el.ind;
		els_n = md_ind->el.res;
	}
	return (do_md_ind(md_ind->nxt, els_n, hd));
}

/* ************************************************************************** */
t_res_mrkp				*ft_mark_in_ind_md(t_res_mrkp *stck, t_res_mrkp *ind)
{
	t_lst_p_s				*tmp2;

	tmp2 = stck->lst;
	stck->hd = ind->hd;
	stck->els_n = ind->els_n;
	stck->md = "ind";
	while (stck->lst)
	{
		if (stck->lst->el.ind == ind->hd && ++ind->hd)
			stck->lst->el.res = 1;
		else
			stck->lst->el.res = 0;
		stck->lst = stck->lst->nxt;
	}
	stck->lst = tmp2;
	return (stck);
}

/* ************************************************************************** */
t_res_mrkp				*ft_mark_in_grtr_md(t_res_mrkp *stck, t_res_mrkp *grtr)
{
	t_lst_p_s				*tmp1;
	int						tmp2;

	tmp1 = stck->lst;
	while (tmp1 && tmp1->el.ind != grtr->hd && (tmp1->el.res = 0) > -1)
		tmp1 = tmp1->nxt;
	tmp2 = tmp1->el.num;
	tmp1->el.res = 1;
	tmp1 = tmp1->nxt;
	while (tmp1)
	{
		if ((tmp2 < tmp1->el.num) && (tmp2 = tmp1->el.num) >= INT_MIN)
			tmp1->el.res = 1;
		else
		{
			while (tmp1 && (tmp1->el.res = 0) > -1)
				tmp1 = tmp1->nxt;
			break;
		}
		tmp1 = tmp1->nxt;
	}
	stck->hd = grtr->hd;
	stck->els_n = grtr->els_n;
	stck->md = "grtr";
	return (stck);
}
