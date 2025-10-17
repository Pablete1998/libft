/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 20:33:34 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/02 19:42:13 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
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

	c = 'H';
	i = ft_isprint(c) + '0';
	write(1, &i, 1);
}*/