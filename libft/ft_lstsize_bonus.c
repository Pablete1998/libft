/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:22:51 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/17 16:07:05 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
/* 
int	main(void)
{
	int		size;
	t_list	*node1 = malloc(sizeof (t_list));
	t_list	*node2 = malloc(sizeof (t_list));
	t_list	*node3 = malloc(sizeof (t_list));

	size = 0;
	node1->content = "+hola ¿qué tal?";
	node2->content = "-muy bien ¿y tú?";
	node3->content = "+chachi pitachi";
	node1->next = node2;
	node2->next = node3;
	node3->next  = NULL;
	size = ft_lstsize(node1);
	printf("%d", size);
} */
