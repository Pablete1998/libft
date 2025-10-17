/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 22:31:59 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/16 13:45:21 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*ptr1;
	unsigned char		*ptr2;
	size_t				i;

	ptr1 = (const unsigned char *)src;
	ptr2 = (unsigned char *) dest;
	if (ptr2 == ptr1 || n == 0)
		return (dest);
	if (ptr2 > ptr1)
	{
		i = n;
		while (i > 0)
		{
			i--;
			ptr2[i] = ptr1[i];
		}
		return (dest);
	}
	else
	{
		dest = ft_memcpy(dest, src, n);
		return (dest);
	}
}

/*
int main(void)
{
	size_t n = 5;
	const void i;
	void  j;
}*/