/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare  <marvin@42.fr>        	    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:01:01 by jolivare          #+#    #+#             */
/*   Updated: 2023/09/29 13:34:15 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (s[i])
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	while (i > 0)
	{
		dest[j] = s[j];
		i--;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*int main()
{
	char *s1 = "mondongo";
	printf("%s\n", strdup(s1));
	printf("%s\n", ft_strdup(s1));
}*/