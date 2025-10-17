/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:03:03 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/15 17:55:16 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(s);
	ptr = malloc((i) + 1);
	if (!ptr)
		return (NULL);
	while (s[j] != '\0')
	{
		ptr[j] = s[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
/* 
int	main(void)
{
	const char	*tmp;
	char		*result;
	char		*official;

	tmp = NULL;
	official = strdup(tmp);
	printf("%s", official);
	result = ft_strdup(tmp);
	printf("%s", result);
} */
