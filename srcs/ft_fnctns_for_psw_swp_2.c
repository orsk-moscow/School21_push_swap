#include "../includes/push_swap.h"

/* ************************************************************************** */
t_2_stcks_1				*ft_do_markup(t_2_stcks_1 *stcks)
{
	t_rlst_markup			*mode_grtr;
	t_rlst_markup			*mode_indx;

	mode_grtr = stcks->a;
	mode_indx = stcks->a;
	mode_grtr = ft_do_mode_grtr(mode_grtr->lst,0,0);
	mode_indx->elmnts_in = 1;
	mode_indx->head = mode_indx->lst->elmnt.indx;
	mode_indx = ft_do_mode_indx(mode_indx->lst,0,0);
	stcks->a = (mode_indx->elmnts_in >= mode_grtr->elmnts_in ?
		ft_mark_in_indx_md(stcks->a, mode_indx) :
		ft_mark_in_grtr_md(stcks->a, mode_grtr));
	stcks->b = ft_init_stck();
	return (stcks);
}

/* ************************************************************************** */
int						ft_is_stack_clear(t_lst_psh_swp_1 *stck)
{
	while (stck)
	{
		if (stck->elmnt.rslt != 1)
			return (0);
		stck = stck->next;
	}
	return (1);
}
