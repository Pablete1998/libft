/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:38:26 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/14 18:24:12 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	size_t			a;
	unsigned char	l;

	l = (unsigned char)c;
	i = 0;
	a = ft_strlen(s);
	if (!s)
		return (NULL);
	if (l == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (i != (int)a)
	{
		if (s[i] == l)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
/* 
int	main(void)
{
	const char	*s;
	int			a;

	s = "teste";
	a = 'e' + 256;
	printf("%s", strchr(s, a));
	printf("\n%s", ft_strchr(s, a));
} */
