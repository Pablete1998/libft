/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:04:01 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/14 23:16:17 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t				i;
	size_t				j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (i < len && (big[i] != '\0' || little[i] != '\0'))
	{
		while (big[i + j] == little[j] && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
/* 
int	main(void)
{
	const char	*largestring;
	const char	*smallstring;
	size_t		len;
	char		*ptr;
	char		*ptr2;

	largestring = "lorem ipsum dolor sit amet";
	smallstring = "dolor";
	len = 15;
	ptr = strnstr(largestring, smallstring, len);
	printf("%s", ptr);
	ptr2 = ft_strnstr(largestring, smallstring, len);
	printf("\n%s", ptr2);
} */
