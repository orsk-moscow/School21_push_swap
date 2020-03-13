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
t_res_mrkp				*ft_do_mode_grtr(t_lst_p_s *mode_grtr, int els_n, int head)
{
	t_res_mrkp				*res;

	if (!mode_grtr->nxt)
	{
		if (!(res = (t_res_mrkp*)malloc(sizeof(t_res_mrkp*))))
			ft_error_1();
		res->head = mode_grtr->el.ind;
		res->els_n = 1;
		res->lst = mode_grtr;
		res->lst->el.res = 1;
		return (res);
	}
	res = ft_do_mode_grtr(mode_grtr->nxt, els_n, head);
	if (mode_grtr->el.num < res->lst->el.num)
	{
		mode_grtr->el.res = res->lst->el.res + 1;
		if (mode_grtr->el.res > res->els_n)
		{
			head = mode_grtr->el.ind;
			els_n = mode_grtr->el.res;
		}
		else if (mode_grtr->el.res == res->els_n &&
			mode_grtr->el.ind < res->lst->el.ind)
			head = mode_grtr->el.ind;
		else
		{
			els_n = res->els_n;
			head = res->head;
		}
	}
	else
	{
		mode_grtr->el.res = 1;
		els_n = res->els_n;
		head = res->head;
	}
	res->head = head;
	res->els_n = els_n;
	res->lst = mode_grtr;
	return (res);
}

/* ************************************************************************** */
t_res_mrkp				*ft_do_mode_ind(t_lst_p_s *mode_ind, int els_n, int head)
{
	t_res_mrkp				*tmp1;
	int						tmp2;
	t_lst_p_s				*tmp3;

	if (!mode_ind)
	{
		if (!(tmp1 = (t_res_mrkp*)malloc(sizeof(t_res_mrkp*))))
			ft_error_1();
		tmp1->els_n = els_n;
		tmp1->head = head;
		tmp1->lst = NULL;
		return (tmp1);
	}
	tmp2 = mode_ind->el.ind;
	mode_ind->el.res = 1;
	tmp3 = mode_ind;
	while (tmp3)
	{
		if (tmp3->el.ind == tmp2 + 1 && ++tmp2)
			(mode_ind->el.res)++;
		tmp3 = tmp3->nxt;
	}
	if (mode_ind->el.res > els_n || (
		mode_ind->el.res == els_n &&
		mode_ind->el.ind < head))
	{
		head = mode_ind->el.ind;
		els_n = mode_ind->el.res;
	}
	return (ft_do_mode_ind(mode_ind->nxt, els_n, head));
}

/* ************************************************************************** */
t_res_mrkp				*ft_mark_in_ind_md(t_res_mrkp *stck, t_res_mrkp *ind)
{
	t_lst_p_s				*tmp2;

	tmp2 = stck->lst;
	stck->head = ind->head;
	stck->els_n = ind->els_n;
	stck->mode = "ind";
	while (stck->lst)
	{
		if (stck->lst->el.ind == ind->head && ++ind->head)
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
	while (tmp1 && tmp1->el.ind != grtr->head)
	{
		tmp1->el.res = 0;
		tmp1 = tmp1->nxt;
	}
	tmp2 = tmp1->el.num;
	tmp1->el.res = 1;
	tmp1 = tmp1->nxt;
	while (tmp1)
	{
		if (tmp2 < tmp1->el.num)
		{
			tmp2 = tmp1->el.num;
			tmp1->el.res = 1;
		}
		else
		{
			while (tmp1)
			{
				tmp1->el.res = 0;
				tmp1 = tmp1->nxt;
			}
			break;
		}
		tmp1 = tmp1->nxt;
	}
	stck->head = grtr->head;
	stck->els_n = grtr->els_n;
	stck->mode = "grtr";
	return (stck);
}
