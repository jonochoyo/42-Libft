/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:30:19 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/07/17 16:32:16 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
Allocates (with malloc(3)) and returns a string representing the integer 
received as an argument. Negative numbers must be handled.

PARAMETERS:
n:	the integer to convert.

RETURN VALUE:
The string representing the integer.
NULL if the allocation fails.

EXTERNAL FUNCTIONS:
malloc
*/

static int	ft_get_size(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				size;
	unsigned int	nbr;

	size = ft_get_size(n);
	str = (char *) malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	nbr = n;
	if (n < 0)
	{
		str[0] = '-';
		nbr = n * (-1);
	}
	if (nbr == 0)
		str[0] = '0';
	str[size] = '\0';
	while (nbr != 0)
	{
		size--;
		str[size] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (str);
}
