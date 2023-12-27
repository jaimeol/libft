/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:43:13 by jolivare          #+#    #+#             */
/*   Updated: 2023/12/15 15:43:23 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static void	itoa_isneg(int *num, int *neg)
{
	if (*num < 0)
	{
		*num *= -1;
		*neg = 1;
	}
}

static int	calc_lon(int n)
{
	int	len;
	int	aux;

	len = 1;
	aux = n;
	while (aux / 10 != 0)
	{
		len++;
		aux /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		aux;
	int		len;
	int		neg;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	aux = n;
	len = 1;
	neg = 0;
	itoa_isneg (&n, &neg);
	len = calc_lon(n);
	len += neg;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
/*int main ()
{
	int x = -46125412;
	char *str = ft_itoa(x);
	printf("%s\n", str);
	return(0);
}*/
