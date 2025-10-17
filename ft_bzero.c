/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:23:18 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/16 17:24:58 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
	return (s);
}

/*
int	main(void)
{
	char	s[19] = "Hola hola caracola";
	size_t	n;
	char	*aux;
	int		i;

	aux = s;
	n = 5;
	printf("%s", s);
	bzero(s, n);
	printf("\n%s", s);
	ft_bzero(aux, n);
	while (i < 18)
	{
		write(1, &s[i], 1);
		write(1, "\n", 2);
		i++;
	}
}*/
