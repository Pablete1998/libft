/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:12:24 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/16 15:35:40 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	counter_word(const char *s, char c)
{
	size_t	count;
	int		sep;

	count = 0;
	sep = 0;
	while (*s)
	{
		if (*s != c && !sep)
		{
			sep = 1;
			count++;
		}
		else if (*s == c)
			sep = 0;
		s++;
	}
	return (count);
}

static size_t	counter_leter(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}

static	void	*ft_frezeer(char **result, size_t count)
{
	while (count-- && count >= 0)
		free(result[count]);
	free(result);
	return (NULL);
}
/* 
void ft_matrix_free(char **matrix)
{
	int	i;

	i = 0;
	while(matrix[i])
	{
		free(matrix[i]);
		i++;	
	}
	free(matrix);
	return (NULL)
} */

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;
	size_t	words;

	i = -1;
	words = counter_word(s, c);
	j = words;
	result = malloc((words + 1) * sizeof (char *));
	if (!result)
		return (NULL);
	while (s[++i] != '\0' && words > 0)
	{
		if (s[i] != c)
		{
			result[j - words] = malloc(counter_leter(&s[i], c));
			if (!result[j - words])
				return (ft_frezeer(result, j - words));
			ft_strlcpy(result[j - words], &s[i], counter_leter(&s[i], c));
			words--;
			i = i + counter_leter(&s[i], c) - 1;
		}
	}
	result[j] = NULL;
	return (result);
}

/* 
int main(void)
{
	char	*a;
	char	c;
	char	**result;
	size_t	i;

	i = 0;
	a = "lorem ipsum iempier congue, euismod non, mi.";
	c = ' ';
	
	// 7 + 1
	
	// [0] = 5 + 1
	// [1] = 5 + 1
	// [2] = 6 + 1
	// [3] = 7 + 1
	// [4] = 7 + 1
	// [5] = 4 + 1
	// [6] = 3 + 1


	
	result = ft_split(a, c);
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		printf("%zu\n", ft_strlen(result[i]));
		i++;
	}
	free(result);
	return (0);
} */
