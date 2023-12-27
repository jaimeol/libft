/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:59:36 by jolivare          #+#    #+#             */
/*   Updated: 2023/10/12 12:12:22 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*k;

	k = malloc(sizeof(t_list));
	if (k == NULL)
		return (NULL);
	k -> content = content;
	k -> next = NULL;
	return (k);
}
