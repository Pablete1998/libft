/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:22:07 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/14 21:50:02 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	if (s[i] == '\0')
		write(fd, "\n", 1);
}
/* 
int	main(void)
{
	char	*s;
	int		fd;

	fd = 2;
	s = "lorem ipsum dolor sit amet";
	ft_putendl_fd(s, fd);
} */
