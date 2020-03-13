#include "../includes/push_swap.h"

/* ************************************************************************** */
size_t					ft_lstlen_1(t_lst_psh_swp_1 *lst)
{
	size_t					sz;

	sz = 0;
	while (lst)
	{
		sz++;
		lst = lst->next;
	}
	return (sz);
}

/* ************************************************************************** */
t_2_stcks_1				*ft_do_sa_1(t_2_stcks_1 *stcks)
{
	size_t					len_a;
	t_nmbr_indx_rslt		tmp1;
	t_nmbr_indx_rslt		tmp2;

	len_a = ft_lstlen_1(stcks->a->lst);
	if (len_a <= 1)
		return (stcks);
	tmp1 = stcks->a->lst->elmnt;
	tmp2 = stcks->a->lst->next->elmnt;
	stcks->a->lst->elmnt = tmp2;
	stcks->a->lst->next->elmnt = tmp1;
	ft_putstr_fd("sa\n", (int)STDOUT_FILENO);
	return (stcks);
}

/* ************************************************************************** */
void					ft_prnt_rrb_n(int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		ft_putstr("rrb\n");
}

/* ************************************************************************** */
void					ft_prnt_rrr_n(int nb, int na)
{
	int						itrtr1;
	int						min_n;
	int						max_n;

	itrtr1 = 0;
	min_n = (na > nb ? nb : na);
	max_n = (na > nb ? na : nb);
	while (itrtr1 < min_n)
	{
		ft_putstr("rrr\n");
		itrtr1++;
	}
	while (itrtr1 < max_n)
	{
		na < max_n ? ft_putstr("rrb\n") : ft_putstr("rra\n");
		itrtr1++;
	}
}
