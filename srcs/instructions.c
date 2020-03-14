#include "../includes/push_swap.h"

/* ************************************************************************** */
t_stcks					*rrb_n(t_stcks *stcks, int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		stcks = rrb_1(stcks);
	return (stcks);
}

/* ************************************************************************** */
t_stcks					*rb_n(t_stcks *stcks, int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		stcks = rb_1(stcks);
	return (stcks);
}

/* ************************************************************************** */
t_stcks					*rra_n_s(t_stcks *stcks, int n)
{
	int						itrtr1;

	itrtr1 = 0;
	while (itrtr1++ < n)
		stcks = rra_1_s(stcks);
	return (stcks);
}

/* ************************************************************************** */
t_2_stcks				do_instrs(t_2_stcks stcks, char *instr, size_t n_s)
{
	if (!ft_strncmp(instr, "sa", n_s))
		stcks = do_sa(stcks);
	else if (!ft_strncmp(instr, "sb", n_s))
		stcks = do_sb(stcks);
	else if (!ft_strncmp(instr, "ss", n_s))
		stcks = do_ss(stcks);
	else if (!ft_strncmp(instr, "pa", n_s))
		stcks = do_pa(stcks);
	else if (!ft_strncmp(instr, "pb", n_s))
		stcks = do_pb(stcks);
	else if (!ft_strncmp(instr, "ra", n_s))
		stcks = ra(stcks);
	else if (!ft_strncmp(instr, "rb", n_s))
		stcks = rb(stcks);
	else if (!ft_strncmp(instr, "rr", n_s))
		stcks = rr(stcks);
	else if (!ft_strncmp(instr, "rra", n_s))
		stcks = rra(stcks);
	else if (!ft_strncmp(instr, "rrb", n_s))
		stcks = rrb(stcks);
	else if (!ft_strncmp(instr, "rrr", n_s))
		stcks = rrr(stcks);
	return (stcks);
}

/* ************************************************************************** */
t_2_stcks				do_sa(t_2_stcks stcks)
{
	size_t					len_a;
	void					*tmp1;
	void					*tmp2;

	len_a = ft_lstlen(stcks.a);
	if (len_a <= 1)
		return (stcks);
	tmp1 = stcks.a->content;
	tmp2 = stcks.a->nxt->content;
	stcks.a->content = tmp2;
	stcks.a->nxt->content = tmp1;
	return (stcks);
}
