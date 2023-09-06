/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:28:08 by truello           #+#    #+#             */
/*   Updated: 2023/09/06 19:54:18 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	if (!*str)
		return (0);
	return (1 + ft_strlen(++str));
}

char	*ft_strdup(char *src)
{
	char	*r;
	int		src_len;

	src_len = ft_strlen(src);
	r = (char *) malloc(src_len + 1);
	r[src_len] = '\0';
	while (--src_len >= 0)
		r[src_len] = src[src_len];
	return (r);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*r;
	int			i;

	i = 0;
	r = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (!r)
		return (0);
	r[ac].str = 0;
	while (i < ac)
	{
		r[i].size = ft_strlen(av[i]);
		r[i].str = av[i];
		r[i].copy = ft_strdup(r[i].str);
	}
	return (r);
}
