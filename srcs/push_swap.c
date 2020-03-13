#include "../includes/push_swap.h"

/* ************************************************************************** */
int						main(int ac, char **av)
{
	t_stcks					*stcks;
	int						els_b;

	if (ft_is_dplcts(ac, av))
		ft_error_1();
	stcks = ft_gt_stcks_1(ac, av);
	stcks->a->lst = ft_clct_inds(stcks->a->lst);
	stcks = ft_do_markup(stcks);
	els_b = --ac - stcks->a->els_n;
	ac = stcks->a->els_n;
	stcks = ft_do_fr_a_to_b(stcks);
	while (stcks->b->lst)
		stcks = ft_do_fr_b_to_a(stcks, els_b--, ac++);
	stcks = ft_align_a(stcks, ac);
	exit(0);
}
