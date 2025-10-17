/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:35:28 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/08 20:37:27 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (n == 0)
		return (dest);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/* 
int	main(void)
{
	char		dest[10] = "";
	char		src[] = "segfaulter tu dois";
	size_t		n;
	char		*i;
	char		*j;

	j = dest;
	n = 17;
	i = ft_memcpy(dest, src, n);
	printf("%s", i);
} */
