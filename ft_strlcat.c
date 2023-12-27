/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:41:28 by jolivare          #+#    #+#             */
/*   Updated: 2023/09/29 13:34:36 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	londest;
	size_t	lonsrc;
	size_t	cont;

	londest = ft_strlen(dest);
	lonsrc = ft_strlen(src);
	if (destsize <= londest)
		return (lonsrc + destsize);
	cont = londest;
	while (*src != '\0' && cont < (destsize - 1))
		*(dest + cont++) = *src++;
	*(dest + cont) = '\0';
	return (londest + lonsrc);
}
