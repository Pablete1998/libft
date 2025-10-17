/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:14:11 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/09 14:19:46 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
	{
		c -= 32;
		return (c);
	}
	return (c);
}
/*
int	main(void)
{
	char	i;
	char	j;

	i = 'h';
	j = ft_toupper(i);
	write(1, &j, 1);
}*/
