#include "../includes/push_swap.h"

/* ************************************************************************** */
t_2_stcks				ft_gt_stcks(int ac, char **av)
{
	t_2_stcks				stcks;
	int						res;
	int						n_arg;

	if (ac == 1)
		exit(1);
	n_arg = ac;
	stcks.a = NULL;
	stcks.b = NULL;
	res = ft_atoi(av[--ac]);
	if (ft_chck_arg(res, av[ac]))
		ft_error(stcks.a, stcks.b);
	stcks.a = ft_lstnew(&res, sizeof(int));
	while (--ac > 0)
	{
		res = ft_atoi(av[ac]);
		if (ft_chck_arg(res, av[ac]))
			ft_error(stcks.a, stcks.b);
		ft_lstadd(&stcks.a, ft_lstnew(&res, sizeof(int)));
	}
	return (stcks);
}

/* ************************************************************************** */
t_res_mrkp				*ft_init_stck()
{
	t_res_mrkp				*tmp1;

	if (!(tmp1 = (t_res_mrkp*)malloc(sizeof(t_res_mrkp*))))
		ft_error_1();
	tmp1->lst = NULL;
	tmp1->els_n = 0;
	tmp1->head = -1;
	tmp1->mode = "";
	return (tmp1);
}

/* ************************************************************************** */
t_stcks					*ft_init_stcks()
{
	t_stcks					*tmp1;

	if (!(tmp1 = (t_stcks*)malloc(sizeof(t_stcks*))))
		ft_error_1();
	if (!(tmp1->a = ft_init_stck()))
	//  ||
	// 	!(tmp1->b = ft_init_stck()))
		ft_error_1();
	return (tmp1);
}

/* ************************************************************************** */
t_stcks					*ft_gt_stcks_1(int ac, char **av)
{
	t_stcks					*stcks;
	int						res;
	int						n_arg;

	if (ac == 1)
		exit(1);
	n_arg = ac;
	stcks = ft_init_stcks();
	stcks->a->lst = NULL;
	res = ft_atoi(av[--ac]);
	if (ft_chck_arg(res, av[ac]))
		ft_error_1();
	stcks->a->lst = ft_lstnew_1(res, -1);
	while (--ac > 0)
	{
		res = ft_atoi(av[ac]);
		if (ft_chck_arg(res, av[ac]))
			ft_error_1();
		ft_lstadd_1(&stcks->a->lst, ft_lstnew_1(res, -1));
	}
	return (stcks);
}

/* ************************************************************************** */
t_stcks					*ft_do_rrb_n_slnt(t_stcks *stcks, int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		stcks = ft_do_rrb_1_slnt(stcks);
	return (stcks);
}
