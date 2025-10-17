/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 20:25:08 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/14 18:11:02 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	counterlen(int c)
{
	size_t	j;

	j = 0;
	while (c > 0)
	{
		c = c / 10;
		j++;
	}
	return (j);
}

static char	*incaselesszero(int n)
{
	char	*a;
	size_t	j;
	size_t	c;

	n = n * -1;
	j = counterlen(n);
	c = j;
	a = malloc(j + 2);
	if (!a)
		return (NULL);
	a[0] = '-';
	while (n >= 1)
	{
		a[j] = n % 10 + '0';
		n = n / 10;
		j--;
	}
	a[c + 1] = '\0';
	return (a);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		c;
	size_t	j;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	c = n;
	j = counterlen(c);
	if (n < 0)
		return (a = incaselesszero(n), a);
	else
	{
		a = malloc(j + 1);
		if (!a)
			return (NULL);
	}
	while (n >= 1)
	{
		a[j - 1] = n % 10 + '0';
		n = n / 10;
		j--;
	}
	return (j = counterlen(c), a[j] = '\0', a);
}
/* 
int	main(void)
{
	int		n;
	char	*a;

	n = -9;
	a = ft_itoa(n);
	printf("%s", a);
} */
