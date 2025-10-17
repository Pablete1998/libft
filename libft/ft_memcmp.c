/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:05:23 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/08 15:39:51 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n -1)
	{
		if (ptr1[i] == ptr2[i])
			i++;
		else
			return (ptr1[i] - ptr2[i]);
	}
	return (ptr1[i] - ptr2[i]);
}
/* 
int	main(void)
{
	const char	*s1;
	const char	*s2;
	size_t		n;

	n = 0;
	s1 = "abcdefghij";
	s2 = "abcdefgxyz";
	printf("%d", memcmp(s1, s2, n));
	printf("\n%d", ft_memcmp(s1, s2, n));
} */
