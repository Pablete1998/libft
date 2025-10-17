/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:21:15 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/17 20:29:59 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;

	newlst = NULL;
	newlst = malloc(sizeof (t_list));
	while(lst)
	{
		newlst->content = f(lst->content);
		if (!newlst)
			ft_lstclear(newlst, del);
			return (NULL);
		lst = lst->next;
		newlst = newlst->next;		
	}
	return (newlst);
}