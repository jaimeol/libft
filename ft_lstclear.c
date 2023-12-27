/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:12:08 by jolivare          #+#    #+#             */
/*   Updated: 2023/10/18 14:53:24 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*nextnode;

	current = *lst;
	if (!lst || !*lst)
		return ;
	while (current)
	{
		nextnode = current -> next;
		ft_lstdelone(current, del);
		current = nextnode;
	}
	*lst = NULL;
}
