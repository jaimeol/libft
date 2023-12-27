/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:08:45 by jolivare          #+#    #+#             */
/*   Updated: 2023/10/10 11:20:42 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	cont;
	size_t	i;

	cont = 0;
	i = 0;
	while (src[cont])
		cont++;
	if (destsize < 1)
		return (cont);
	while (src[i] && i < destsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (destsize)
		dest[i] = '\0';
	return (cont);
}
