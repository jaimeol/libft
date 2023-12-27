/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:32:34 by jolivare          #+#    #+#             */
/*   Updated: 2023/10/18 14:52:51 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*k;
	t_list	*newnode;
	void	*content;

	k = NULL;
	while (lst)
	{
		content = (*f)(lst -> content);
		newnode = ft_lstnew(content);
		if (!newnode)
		{
			del(content);
			ft_lstclear(&k, del);
			return (0);
		}
		ft_lstadd_back(&k, newnode);
		lst = lst -> next;
	}
	return (k);
}
