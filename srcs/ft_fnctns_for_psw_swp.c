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
			if (tmp1->elmnt.nmbr > tmp2->elmnt.nmbr)
				indx++;
			tmp2 = tmp2->next;
		}
		tmp1->elmnt.indx = indx;
		tmp1 = tmp1->next;
	}
	return (stck);
}

/* ************************************************************************** */
t_rlst_markup			*ft_do_mode_grtr(t_lst_psh_swp_1 *mode_grtr, int elmnts_in, int head)
{
	t_rlst_markup			*rslt;

	if (!mode_grtr->next)
	{
		if (!(rslt = (t_rlst_markup*)malloc(sizeof(t_rlst_markup*))))
			ft_error_1();
		rslt->head = mode_grtr->elmnt.indx;
		rslt->elmnts_in = 1;
		rslt->lst = mode_grtr;
		rslt->lst->elmnt.rslt = 1;
		return (rslt);
	}
	rslt = ft_do_mode_grtr(mode_grtr->next, elmnts_in, head);
	if (mode_grtr->elmnt.nmbr < rslt->lst->elmnt.nmbr)
	{
		mode_grtr->elmnt.rslt = rslt->lst->elmnt.rslt + 1;
		if (mode_grtr->elmnt.rslt > rslt->elmnts_in)
		{
			head = mode_grtr->elmnt.indx;
			elmnts_in = mode_grtr->elmnt.rslt;
		}
		else if (mode_grtr->elmnt.rslt == rslt->elmnts_in &&
			mode_grtr->elmnt.indx < rslt->lst->elmnt.indx)
			head = mode_grtr->elmnt.indx;
		else
		{
			elmnts_in = rslt->elmnts_in;
			head = rslt->head;
		}
	}
	else
	{
		mode_grtr->elmnt.rslt = 1;
		elmnts_in = rslt->elmnts_in;
		head = rslt->head;
	}
	rslt->head = head;
	rslt->elmnts_in = elmnts_in;
	rslt->lst = mode_grtr;
	return (rslt);
}

/* ************************************************************************** */
t_rlst_markup			*ft_do_mode_indx(t_lst_psh_swp_1 *mode_indx, int elmnts_in, int head)
{
	t_rlst_markup			*tmp1;
	int						tmp2;
	t_lst_psh_swp_1			*tmp3;

	if (!mode_indx)
	{
		if (!(tmp1 = (t_rlst_markup*)malloc(sizeof(t_rlst_markup*))))
			ft_error_1();
		tmp1->elmnts_in = elmnts_in;
		tmp1->head = head;
		tmp1->lst = NULL;
		return (tmp1);
	}
	tmp2 = mode_indx->elmnt.indx;
	mode_indx->elmnt.rslt = 1;
	tmp3 = mode_indx;
	while (tmp3)
	{
		if (tmp3->elmnt.indx == tmp2 + 1 && ++tmp2)
			(mode_indx->elmnt.rslt)++;
		tmp3 = tmp3->next;
	}
	if (mode_indx->elmnt.rslt > elmnts_in || (
		mode_indx->elmnt.rslt == elmnts_in &&
		mode_indx->elmnt.indx < head))
	{
		head = mode_indx->elmnt.indx;
		elmnts_in = mode_indx->elmnt.rslt;
	}
	return (ft_do_mode_indx(mode_indx->next, elmnts_in, head));
}

/* ************************************************************************** */
t_rlst_markup			*ft_mark_in_indx_md(t_rlst_markup *stck, t_rlst_markup *indx)
{
	t_lst_psh_swp_1			*tmp2;

	tmp2 = stck->lst;
	stck->head = indx->head;
	stck->elmnts_in = indx->elmnts_in;
	stck->mode = "indx";
	while (stck->lst)
	{
		if (stck->lst->elmnt.indx == indx->head && ++indx->head)
			stck->lst->elmnt.rslt = 1;
		else
			stck->lst->elmnt.rslt = 0;
		stck->lst = stck->lst->next;
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
	while (tmp1 && tmp1->elmnt.indx != grtr->head)
	{
		tmp1->elmnt.rslt = 0;
		tmp1 = tmp1->next;
	}
	tmp2 = tmp1->elmnt.nmbr;
	tmp1->elmnt.rslt = 1;
	tmp1 = tmp1->next;
	while (tmp1)
	{
		if (tmp2 < tmp1->elmnt.nmbr)
		{
			tmp2 = tmp1->elmnt.nmbr;
			tmp1->elmnt.rslt = 1;
		}
		else
		{
			while (tmp1)
			{
				tmp1->elmnt.rslt = 0;
				tmp1 = tmp1->next;
			}
			break;
		}
		tmp1 = tmp1->next;
	}
	stck->head = grtr->head;
	stck->elmnts_in = grtr->elmnts_in;
	stck->mode = "grtr";
	return (stck);
}
