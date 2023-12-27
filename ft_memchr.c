/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <marvin@42.fr>        			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:11:23 by jolivare          #+#    #+#             */
/*   Updated: 2023/10/11 17:48:12 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	d;
	unsigned char	*str;
	size_t			i;

	d = (unsigned char) c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*str == d)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}
