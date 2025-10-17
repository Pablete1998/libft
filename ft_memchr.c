/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:47:59 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/08 19:09:01 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			i;
	unsigned char	l;

	l = (unsigned char)c;
	a = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (a[i] == l)
			return ((unsigned char *)&s[i]);
		i++;
	}
	return (NULL);
}
/* 
int	main(void)
{
	char	*s;
	char	c;
	size_t	n;
	char	*aux;

	s = "/|\x12\xff\x09\x42\2002\42|\\";
	aux = s;
	c = '\200';
	n = 10;
	s = memchr(s, c, n);
	printf("%s\n", s);
	s = aux;
	s = ft_memchr(s, c, n);
	printf("%s\n", s);
} */
