#include "../includes/push_swap.h"

/* ************************************************************************** */
t_stcks					*rb_1_s(t_stcks *stcks)
{
	size_t					len;
	t_lst_p_s				*tmp1;
	t_lst_p_s				*tmp2;

	len = ft_lstlen_1(stcks->b->lst);
	if (len < 2)
		return (stcks);
	tmp1 = stcks->b->lst;
	stcks->b->lst = stcks->b->lst->nxt;
	tmp2 = stcks->b->lst;
	tmp1->nxt = NULL;
	while (tmp2->nxt)
		tmp2 = tmp2->nxt;
	tmp2->nxt = tmp1;
	return (stcks);
}

/* ************************************************************************** */
t_stcks					*rb_1(t_stcks *stcks)
{
	size_t					len;
	t_lst_p_s				*tmp1;
	t_lst_p_s				*tmp2;

	len = ft_lstlen_1(stcks->b->lst);
	if (len < 2)
		return (stcks);
	tmp1 = stcks->b->lst;
	stcks->b->lst = stcks->b->lst->nxt;
	tmp2 = stcks->b->lst;
	tmp1->nxt = NULL;
	while (tmp2->nxt)
		tmp2 = tmp2->nxt;
	tmp2->nxt = tmp1;
	ft_putstr_fd("rb\n", (int)STDOUT_FILENO);
	return (stcks);
}

/* ************************************************************************** */
t_stcks					*rra_1_s(t_stcks *stcks)
{
	size_t					len;
	t_lst_p_s				*tmp1;
	t_lst_p_s				*tmp2;

	len = ft_lstlen_1(stcks->a->lst);
	if (len < 2)
		return (stcks);
	tmp2 = stcks->a->lst;
	while (tmp2->nxt->nxt)
		tmp2 = tmp2->nxt;
	tmp1 = tmp2->nxt;
	tmp2->nxt = NULL;
	tmp1->nxt = stcks->a->lst;
	stcks->a->lst = tmp1;
	return (stcks);
}

/* ************************************************************************** */
int						ft_is_sa_needed(t_stcks *stcks)
{
	return (ft_strcmp(stcks->a->md,"grtr") ?
		do_md_grtr_2(stcks->a) : 0);
}

/* ************************************************************************** */
t_res_mrkp				*ft_init_res(t_lst_p_s *md_grtr)
{
	t_res_mrkp				*res;

	(!(res = (t_res_mrkp*)malloc(sizeof(t_res_mrkp*)))) ? ft_error_1() : 0;
	res->hd = md_grtr->el.ind;
	res->els_n = 1;
	res->lst = md_grtr;
	res->lst->el.res = 1;
	return (res);
}
