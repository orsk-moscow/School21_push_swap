/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:05:25 by klekisha          #+#    #+#             */
/*   Updated: 2020/03/16 23:56:44 by u18188899        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *s, char c)
{
	int		i1;
	size_t	len_word;

	if (!s)
		return (-1);
	i1 = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			return (i1);
		i1++;
		len_word = 1;
		while (*s && *s != c)
		{
			s++;
			len_word++;
		}
	}
	return (i1);
}
