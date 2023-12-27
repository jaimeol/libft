/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 07:25:57 by codespace         #+#    #+#             */
/*   Updated: 2023/12/05 16:16:04 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

int	ft_comp(char c, const char *set)
{
	int	k;
	int	lon;

	k = 0;
	lon = ft_strlen(set);
	while (k < lon)
	{
		if (c == set[k])
			return (1);
		k++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*dest;

	i = 0;
	j = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	while (ft_comp(s1[i], set))
		i++;
	while (len > 0 && ft_comp(s1[len - 1], set))
		len--;
	if (len < i)
		len = i;
	dest = (char *)malloc(sizeof(char) * (len - i + 1));
	if (!dest)
		return (NULL);
	while (i < len)
		dest[j++] = (char)s1[i++];
	dest[j] = '\0';
	return (dest);
}

int	main()
{ 
	const char *s1 = "Hola, como estas";
	const char *set = ",";
	printf("%s\n", ft_strtrim(s1, set));
}
