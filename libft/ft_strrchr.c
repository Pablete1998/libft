/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:10:02 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/09 17:08:25 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	l;

	l = (unsigned char)c;
	i = ft_strlen((char *)s);
	if (!s)
		return (NULL);
	if (l == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (i >= 0)
	{
		if (s[i] == l)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/* 
int	main(void)
{
	const char	*s;
	int			a;
	char		*i;

	s = "bonjour";
	a = 'b';
	printf("%s", strrchr(s, a));
	i = ft_strrchr(s, a);
	printf("%s",i);
} */
