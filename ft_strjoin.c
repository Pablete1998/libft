/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:12:50 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/15 17:58:09 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	s = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (s == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	if (s1[0] == '\0' && s2[0] == '\0')
		s[0] = '\0';
	return (s);
}
/* 
int	main(void)
{
	char const	*s1;
	char const	*s2;
	char		*s;

	s1 = "Hola";
	s2 = "caracola";
	s = ft_strjoin(s1, s2);
	printf("%s", s);
} */
