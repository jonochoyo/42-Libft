/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:30:30 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/07/17 16:32:35 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
Applies the function ’f’ to each character of the string ’s’, and passing its 
index as first argument to create a new string (with malloc(3)) resulting
from successive applications of ’f’.

PARAMETERS:
s:	The string on which to iterate.
f:	The function to apply to each character.

RETURN VALUE:
The string created from the successive applications of ’f’.
Returns NULL if the allocation fails.

EXTERNAL FUNCTIONS:
malloc
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dest;

	i = 0;
	dest = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dest == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
