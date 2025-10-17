/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 21:39:07 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/09 16:25:32 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		j;
	int		l;

	l = 1;
	j = 0;
	i = 0;
	while ((nptr[i] > 8 && nptr[i] < 14) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			l = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		j *= 10;
		j += nptr[i] - '0';
		i++;
	}
	return (l * (int)j);
}
/* 
int	main(void)
{
	const char	*nptr;
	int			i;
	int			j;

	nptr = "///45kjhjkhkuhj";
	i = atoi(nptr);
	printf("%d\n", i);
	j = ft_atoi(nptr);
	printf("%d\n", j);
}
 */// mayor de long 922337203685477587
