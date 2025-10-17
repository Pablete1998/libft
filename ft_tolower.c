/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:33:50 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/06 13:33:59 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		c += 32;
		return (c);
	}
	return (c);
}

/* int	main(void)
{
	char	i;
	int		j;

	i = 'H';
	j = ft_tolower(i);
	write(1, &j, 1);
} */
