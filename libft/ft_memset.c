/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 16:34:51 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/16 15:22:59 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
/* 
int	main(void)
{
	size_t	n;
	char	c;
	char	s[] = "vdfafadfaad";;
	char	*devuelto;

	n = 5;
	c = 'a';
	devuelto = ft_memset(s, c, n);
	printf("%s", devuelto);
} */
