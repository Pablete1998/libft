/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:29:09 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/09 18:03:04 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t		i;
	size_t		j;
	size_t		aux;

	aux = ft_strlen(src);
	j = ft_strlen(dest);
	i = 0;
	if (j >= n)
		return (n + ft_strlen(src));
	while (src[i] != '\0' && n - 1 > j + i)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (j + aux);
}
/* 
int	main(void)
{
	char		dest[10] = "a";
	char		dest2[10] = "a";
	size_t		l;
	size_t		result;
	size_t		result2;

	l = 0;
	result = strlcat(dest2, "lorem ipsum dolor sit amet", l);
	printf("%d\n", (int)result);
	result2 = ft_strlcat(dest, "lorem ipsum dolor sit amet", l);
	printf("%d\n", (int)result2);
	printf("%s\n", dest2);
	printf("%s\n", dest);
} */
