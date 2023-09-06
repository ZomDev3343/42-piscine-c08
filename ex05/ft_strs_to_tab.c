/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:28:08 by truello           #+#    #+#             */
/*   Updated: 2023/09/06 18:39:21 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *src);

int	ft_strlen(char *str)
{
	while (*str)
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*r;
	int	i;

	i = 0;
	r = (t_stock *) malloc(sizeof(t_stock) * (ac + 1));
	if (!r)
		return (0);
	r[ac] = 0;
	while (i < ac)
	{
		r[i].size = ft_strlen(av[i]);
		r[i].str = av[i];
		r[i].copy = ft_strdup(r[i].str);
	}
	return (r);
}
