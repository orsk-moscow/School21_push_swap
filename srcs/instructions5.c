#include "../includes/push_swap.h"

/* ************************************************************************** */
t_stcks					*ft_do_pa_1(t_stcks *stcks)
{
	size_t					len;
	t_lst_p_s				*tmp1;

	len = ft_lstlen_1(stcks->b->lst);
	if (len < 1)
		return (stcks);
	tmp1 = stcks->b->lst;
	stcks->b->lst = stcks->b->lst->nxt;
	tmp1->nxt = stcks->a->lst;
	stcks->a->lst = tmp1;
	ft_putstr_fd("pa\n", (int)STDOUT_FILENO);
	return (stcks);
}

/* ************************************************************************** */
t_stcks					*ft_do_pb_1(t_stcks *stcks)
{
	size_t					len;
	t_lst_p_s				*tmp1;

	len = ft_lstlen_1(stcks->a->lst);
	if (len < 1)
		return (stcks);
	tmp1 = stcks->a->lst;
	stcks->a->lst = stcks->a->lst->nxt;
	tmp1->nxt = stcks->b->lst;
	stcks->b->lst = tmp1;
	ft_putstr_fd("pb\n", (int)STDOUT_FILENO);
	return (stcks);
}

/* ************************************************************************** */
t_stcks					*ft_do_ra_1_slnt(t_stcks *stcks)
{
	size_t					len;
	t_lst_p_s				*tmp1;
	t_lst_p_s				*tmp2;

	len = ft_lstlen_1(stcks->a->lst);
	if (len < 2)
		return (stcks);
	tmp1 = stcks->a->lst;
	stcks->a->lst = stcks->a->lst->nxt;
	tmp2 = stcks->a->lst;
	tmp1->nxt = NULL;
	while (tmp2->nxt)
		tmp2 = tmp2->nxt;
	tmp2->nxt = tmp1;
	return (stcks);
}

/* ************************************************************************** */
t_stcks					*ft_do_ra_1(t_stcks *stcks)
{
	size_t					len;
	t_lst_p_s				*tmp1;
	t_lst_p_s				*tmp2;

	len = ft_lstlen_1(stcks->a->lst);
	if (len < 2)
		return (stcks);
	tmp1 = stcks->a->lst;
	stcks->a->lst = stcks->a->lst->nxt;
	tmp2 = stcks->a->lst;
	tmp1->nxt = NULL;
	while (tmp2->nxt)
		tmp2 = tmp2->nxt;
	tmp2->nxt = tmp1;
	ft_putstr_fd("ra\n", (int)STDOUT_FILENO);
	return (stcks);
}
