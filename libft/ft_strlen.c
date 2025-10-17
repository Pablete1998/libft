/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 20:38:53 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/10 15:37:41 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
int	main(void)
{
	const char	*string;
//	size_t		i;

	string = "hola";
//	i = ft_strlen(c) + '0';
//	write(1, &i, 1);

	printf("len str:%zu\n", ft_strlen(string));
}
	*/
