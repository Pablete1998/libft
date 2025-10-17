/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 20:03:01 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/02 11:45:56 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
		return (1);
	else
		return (0);
}
/* 
#include <unistd.h>

int	main(void)
{
	char	c;	
	int		i;

	c = '9';
	i = ft_isdigit(c) + '0';
	write(1, &i, 1);
}*/
