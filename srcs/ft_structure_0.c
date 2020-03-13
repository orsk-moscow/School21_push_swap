#include "../includes/push_swap.h"

/* ************************************************************************** */
t_lst_psh_swp_1			*ft_lstnew_1(int nmbr, int indx)
{
	t_lst_psh_swp_1			*p1;
	t_nmbr_indx_rslt		elm;

	if (!(p1 = (t_lst_psh_swp_1*)malloc(sizeof(t_lst_psh_swp_1))))
		return (NULL);
	elm.indx = indx;
	elm.rslt = -1;
	elm.nmbr = nmbr;
	p1->el = elm;
	p1->nxt = NULL;
	return (p1);
}

/* ************************************************************************** */
void	ft_lstadd_1(t_lst_psh_swp_1 **alst, t_lst_psh_swp_1 *new)
{
	if (new && alst)
	{
		new->nxt = (*alst);
		(*alst) = new;
	}
}

/* ************************************************************************** */
void	ft_lstdel_1(t_lst_psh_swp_1 **alst, void (*del)(int, int, int))
{
	if (alst && del)
	{
		if ((*alst)->nxt)
			ft_lstdel_1(&((*alst)->nxt), del);
		ft_lstdelone_1(&(*alst), del);
	}
}

/* ************************************************************************** */
void	ft_lstdelone_1(t_lst_psh_swp_1 **alst, void (*del)(int, int, int))
{
	if (!alst || !(*alst) || !del)
		return ;
	del((*alst)->el.indx, (*alst)->el.nmbr, (*alst)->el.rslt);
	free(*(alst));
	(*alst) = NULL;
}

/* ************************************************************************** */
void					ft_del_1(int nmbr, int indx, int rslt)
{
	nmbr++;
	nmbr--;
	indx++;
	indx--;
	rslt++;
	rslt--;
	return ;
}
