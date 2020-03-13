#include "../includes/push_swap.h"

/* ************************************************************************** */
int						main(int ac, char **av)
{
	t_2_stcks_1				*stcks;
	int						els_b;

	if (ft_is_dplcts(ac, av))
		ft_error_1();
	stcks = ft_gt_stcks_1(ac, av);
	stcks->a->lst = ft_clct_indxs(stcks->a->lst);
	stcks = ft_do_markup(stcks);
	els_b = --ac - stcks->a->els_in;
	ac = stcks->a->els_in;
	stcks = ft_do_from_a_to_b(stcks);
	while (stcks->b->lst)
		stcks = ft_do_from_b_to_a(stcks, els_b--, ac++);
	stcks = ft_align_a(stcks, ac);
	exit(0);
}
