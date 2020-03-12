#include "../includes/push_swap.h"

/* ************************************************************************** */
t_2_stcks_1				*ft_do_pa_1(t_2_stcks_1 *stcks)
{
	size_t					len;
	t_lst_psh_swp_1			*tmp1;

	len = ft_lstlen_1(stcks->b->lst);
	if (len < 1)
		return (stcks);
	tmp1 = stcks->b->lst;
	stcks->b->lst = stcks->b->lst->next;
	tmp1->next = stcks->a->lst;
	stcks->a->lst = tmp1;
	ft_putstr_fd("pa\n", (int)STDOUT_FILENO);
	return (stcks);
}

/* ************************************************************************** */
t_2_stcks_1				*ft_do_pb_1(t_2_stcks_1 *stcks)
{
	size_t					len;
	t_lst_psh_swp_1			*tmp1;

	len = ft_lstlen_1(stcks->a->lst);
	if (len < 1)
		return (stcks);
	tmp1 = stcks->a->lst;
	stcks->a->lst = stcks->a->lst->next;
	tmp1->next = stcks->b->lst;
	stcks->b->lst = tmp1;
	ft_putstr_fd("pb\n", (int)STDOUT_FILENO);
	return (stcks);
}

/* ************************************************************************** */
t_2_stcks_1				*ft_do_ra_1_slnt(t_2_stcks_1 *stcks)
{
	size_t					len;
	t_lst_psh_swp_1			*tmp1;
	t_lst_psh_swp_1			*tmp2;

	len = ft_lstlen_1(stcks->a->lst);
	if (len < 2)
		return (stcks);
	tmp1 = stcks->a->lst;
	stcks->a->lst = stcks->a->lst->next;
	tmp2 = stcks->a->lst;
	tmp1->next = NULL;
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp1;
	return (stcks);
}

/* ************************************************************************** */
t_2_stcks_1				*ft_do_ra_1(t_2_stcks_1 *stcks)
{
	size_t					len;
	t_lst_psh_swp_1			*tmp1;
	t_lst_psh_swp_1			*tmp2;

	len = ft_lstlen_1(stcks->a->lst);
	if (len < 2)
		return (stcks);
	tmp1 = stcks->a->lst;
	stcks->a->lst = stcks->a->lst->next;
	tmp2 = stcks->a->lst;
	tmp1->next = NULL;
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp1;
	ft_putstr_fd("ra\n", (int)STDOUT_FILENO);
	return (stcks);
}
