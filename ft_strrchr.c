/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:31:34 by jolivare          #+#    #+#             */
/*   Updated: 2023/10/09 14:36:16 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strrchr(const char *str, int c)
{
	char	s;
	int		i;

	s = c;
	i = ft_strlen(str);
	if (s == 0)
		return ((char *) &str[i]);
	while (i >= 0)
	{
		if (str[i] == s)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}
