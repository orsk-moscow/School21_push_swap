#include "../includes/push_swap.h"

/* ************************************************************************** */
int						ft_chck_arg(int intgr, const char *strng)
{
	return (ft_strcmp(ft_itoa(intgr),strng));
}

/* ************************************************************************** */
void					ft_del(void *content, size_t content_size)
{

	// DO NOT DELETE 3 STRINGS BELOW
	// free(content);
	// ft_memdel(&content);
	// content_size = 0;
	content++;
	content--;
	content_size++;
	content_size--;
	return ;
}

/* ************************************************************************** */
void					ft_error(t_list *stck_a,t_list *stck_b)
{
	if (stck_a)
		ft_lstdel(&stck_a, ft_del);
	if (stck_b)
		ft_lstdel(&stck_b, ft_del);
	ft_putstr_fd("Error\n",(int)STDERR_FILENO);
	exit (-1);
}

/* ************************************************************************** */
int						ft_is_dplcts(int ac,char **av)
{
	int						itrtr1;
	int						itrtr2;

	itrtr1 = 1;
	while (itrtr1 < ac)
	{
		itrtr2 = itrtr1 + 1;
		while (itrtr2 < ac)
			if (!ft_strcmp(av[itrtr2++],av[itrtr1]))
				return (1);
		itrtr1++;
	}
	return (0);
}

/* ************************************************************************** */
void					ft_error_1()
{
	ft_putstr_fd("Error\n",(int)STDERR_FILENO);
	exit (-1);
}
