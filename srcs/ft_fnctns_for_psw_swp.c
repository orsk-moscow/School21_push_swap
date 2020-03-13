#include "../includes/push_swap.h"

/* ************************************************************************** */
t_lst_psh_swp_1			*ft_clct_indxs(t_lst_psh_swp_1 *stck)
{
	int						indx;
	t_lst_psh_swp_1			*tmp1;
	t_lst_psh_swp_1			*tmp2;

	tmp1 = stck;
	while (tmp1)
	{
		indx = 0;
		tmp2 = stck;
		while (tmp2)
		{
			if (tmp1->el.nmbr > tmp2->el.nmbr)
				indx++;
			tmp2 = tmp2->nxt;
		}
		tmp1->el.indx = indx;
		tmp1 = tmp1->nxt;
	}
	return (stck);
}

/* ************************************************************************** */
t_rlst_markup			*ft_do_mode_grtr(t_lst_psh_swp_1 *mode_grtr, int els_in, int head)
{
	t_rlst_markup			*rslt;

	if (!mode_grtr->nxt)
	{
		if (!(rslt = (t_rlst_markup*)malloc(sizeof(t_rlst_markup*))))
			ft_error_1();
		rslt->head = mode_grtr->el.indx;
		rslt->els_in = 1;
		rslt->lst = mode_grtr;
		rslt->lst->el.rslt = 1;
		return (rslt);
	}
	rslt = ft_do_mode_grtr(mode_grtr->nxt, els_in, head);
	if (mode_grtr->el.nmbr < rslt->lst->el.nmbr)
	{
		mode_grtr->el.rslt = rslt->lst->el.rslt + 1;
		if (mode_grtr->el.rslt > rslt->els_in)
		{
			head = mode_grtr->el.indx;
			els_in = mode_grtr->el.rslt;
		}
		else if (mode_grtr->el.rslt == rslt->els_in &&
			mode_grtr->el.indx < rslt->lst->el.indx)
			head = mode_grtr->el.indx;
		else
		{
			els_in = rslt->els_in;
			head = rslt->head;
		}
	}
	else
	{
		mode_grtr->el.rslt = 1;
		els_in = rslt->els_in;
		head = rslt->head;
	}
	rslt->head = head;
	rslt->els_in = els_in;
	rslt->lst = mode_grtr;
	return (rslt);
}

/* ************************************************************************** */
t_rlst_markup			*ft_do_mode_indx(t_lst_psh_swp_1 *mode_indx, int els_in, int head)
{
	t_rlst_markup			*tmp1;
	int						tmp2;
	t_lst_psh_swp_1			*tmp3;

	if (!mode_indx)
	{
		if (!(tmp1 = (t_rlst_markup*)malloc(sizeof(t_rlst_markup*))))
			ft_error_1();
		tmp1->els_in = els_in;
		tmp1->head = head;
		tmp1->lst = NULL;
		return (tmp1);
	}
	tmp2 = mode_indx->el.indx;
	mode_indx->el.rslt = 1;
	tmp3 = mode_indx;
	while (tmp3)
	{
		if (tmp3->el.indx == tmp2 + 1 && ++tmp2)
			(mode_indx->el.rslt)++;
		tmp3 = tmp3->nxt;
	}
	if (mode_indx->el.rslt > els_in || (
		mode_indx->el.rslt == els_in &&
		mode_indx->el.indx < head))
	{
		head = mode_indx->el.indx;
		els_in = mode_indx->el.rslt;
	}
	return (ft_do_mode_indx(mode_indx->nxt, els_in, head));
}

/* ************************************************************************** */
t_rlst_markup			*ft_mark_in_indx_md(t_rlst_markup *stck, t_rlst_markup *indx)
{
	t_lst_psh_swp_1			*tmp2;

	tmp2 = stck->lst;
	stck->head = indx->head;
	stck->els_in = indx->els_in;
	stck->mode = "indx";
	while (stck->lst)
	{
		if (stck->lst->el.indx == indx->head && ++indx->head)
			stck->lst->el.rslt = 1;
		else
			stck->lst->el.rslt = 0;
		stck->lst = stck->lst->nxt;
	}
	stck->lst = tmp2;
	return (stck);
}

/* ************************************************************************** */
t_rlst_markup			*ft_mark_in_grtr_md(t_rlst_markup *stck, t_rlst_markup *grtr)
{
	t_lst_psh_swp_1			*tmp1;
	int						tmp2;

	tmp1 = stck->lst;
	while (tmp1 && tmp1->el.indx != grtr->head)
	{
		tmp1->el.rslt = 0;
		tmp1 = tmp1->nxt;
	}
	tmp2 = tmp1->el.nmbr;
	tmp1->el.rslt = 1;
	tmp1 = tmp1->nxt;
	while (tmp1)
	{
		if (tmp2 < tmp1->el.nmbr)
		{
			tmp2 = tmp1->el.nmbr;
			tmp1->el.rslt = 1;
		}
		else
		{
			while (tmp1)
			{
				tmp1->el.rslt = 0;
				tmp1 = tmp1->nxt;
			}
			break;
		}
		tmp1 = tmp1->nxt;
	}
	stck->head = grtr->head;
	stck->els_in = grtr->els_in;
	stck->mode = "grtr";
	return (stck);
}
