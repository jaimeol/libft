/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <marvin@42.fr>        			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:38:38 by jolivare          #+#    #+#             */
/*   Updated: 2023/10/02 15:36:09 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strchr(const char *s, int i)
{
	char	c;

	c = i;
	while (*s != (char)c)
	{
		if (!*s)
			return (0);
		else
			s++;
	}
	return ((char *)s);
}
