/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:28:08 by truello           #+#    #+#             */
/*   Updated: 2023/09/06 17:01:58 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
