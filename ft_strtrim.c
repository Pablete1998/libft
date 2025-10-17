/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:01:19 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/16 13:36:23 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	n;
	char	*s;

	i = 0;
	n = 0;
	j = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (s1[j - 1] && ft_strchr(set, s1[j - 1]))
		j--;
	if (i > j)
	{
		i = 0;
		j = 0;
	}
	s = ft_substr(s1, i, (j - i));
	return (s);
}

/* 
int	main(void)
{
	char const	*s1;
	char const	*set;
	char 		*result;
	size_t		a;

	a = 0;
	s1 = "bbbbbAB CD F   Abb  ";
	set = "Ab ";
	result = ft_strtrim(s1, set);
	printf("%s\n", result);
	printf("%zu", ft_strlen(result));
} */