#include "../includes/push_swap.h"

/* ************************************************************************** */
t_stcks					*ft_do_rra_n(t_stcks *stcks, int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		stcks = ft_do_rra_1(stcks);
	return (stcks);
}

/* ************************************************************************** */
t_stcks					*ft_do_rra_1(t_stcks *stcks)
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
	ft_putstr_fd("rra\n", (int)STDOUT_FILENO);
	return (stcks);
}

/* ************************************************************************** */
// t_stcks					*ft_do_rrr_1(t_stcks *stcks)
// {
// 	size_t					len;
// 	t_lst_p_s				*tmp1;
// 	t_lst_p_s				*tmp2;

// 	len = ft_lstlen_1(stcks->b->lst);
// 	if (len < 2)
// 		return (stcks);
// 	tmp2 = stcks->b->lst;
// 	while (tmp2->nxt->nxt)
// 		tmp2 = tmp2->nxt;
// 	tmp1 = tmp2->nxt;
// 	tmp2->nxt = NULL;
// 	tmp1->nxt = stcks->b->lst;
// 	stcks->b->lst = tmp1;

// 	len = ft_lstlen_1(stcks->a->lst);
// 	if (len < 2)
// 		return (stcks);
// 	tmp2 = stcks->a->lst;
// 	while (tmp2->nxt->nxt)
// 		tmp2 = tmp2->nxt;
// 	tmp1 = tmp2->nxt;
// 	tmp2->nxt = NULL;
// 	tmp1->nxt = stcks->a->lst;
// 	stcks->a->lst = tmp1;

// 	ft_putstr_fd("rrr\n", (int)STDOUT_FILENO);
// 	return (stcks);
// }

/* ************************************************************************** */
t_stcks					*ft_do_rrb_1(t_stcks *stcks)
{
	size_t					len;
	t_lst_p_s				*tmp1;
	t_lst_p_s				*tmp2;

	len = ft_lstlen_1(stcks->b->lst);
	if (len < 2)
		return (stcks);
	tmp2 = stcks->b->lst;
	while (tmp2->nxt->nxt)
		tmp2 = tmp2->nxt;
	tmp1 = tmp2->nxt;
	tmp2->nxt = NULL;
	tmp1->nxt = stcks->b->lst;
	stcks->b->lst = tmp1;
	ft_putstr_fd("rrb\n", (int)STDOUT_FILENO);
	return (stcks);
}

/* ************************************************************************** */
t_stcks					*ft_do_rrb_1_slnt(t_stcks *stcks)
{
	size_t					len;
	t_lst_p_s				*tmp1;
	t_lst_p_s				*tmp2;

	len = ft_lstlen_1(stcks->b->lst);
	if (len < 2)
		return (stcks);
	tmp2 = stcks->b->lst;
	while (tmp2->nxt->nxt)
		tmp2 = tmp2->nxt;
	tmp1 = tmp2->nxt;
	tmp2->nxt = NULL;
	tmp1->nxt = stcks->b->lst;
	stcks->b->lst = tmp1;
	return (stcks);
}
