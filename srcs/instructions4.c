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
