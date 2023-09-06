/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:37:48 by truello           #+#    #+#             */
/*   Updated: 2023/09/06 14:01:00 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# define FALSE 0
# define TRUE 1
# define EVEN(nb) nb % 2 == 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0

typedef int t_bool;

void	ft_putstr(char *str);

#endif
