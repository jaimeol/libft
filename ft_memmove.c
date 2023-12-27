/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <marvin@42.fr>        			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:53:12 by jolivare         #+#    #+#             */
/*   Updated: 2023/10/11 16:31:00 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (src == NULL && dest == NULL)
		return (NULL);
	if (d >= s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
		ft_memcpy(d, s, n);
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char src[] = "Juan Carlos";
	char dest[] = "Knekro";
	size_t n = 3;

	printf("%p\n", memmove(dest, src, n));
	printf("%p\n", ft_memmove(dest, src, n));
}*/
