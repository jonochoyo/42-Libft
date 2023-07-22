/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:29:45 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/07/13 15:45:04 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
Allocates (with malloc(3)) and returns a new string, which is the result of 
the concatenation of ’s1’ and ’s2’.

PARAMETERS:
s1:	The prefix string.
s2:	The suffix string.

RETURN VALUE:
The new string.
NULL if the allocation fails.

EXTERNAL FUNCTIONS:
malloc
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	nbytes;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	nbytes = ft_strlen(s1) + ft_strlen(s2) + 1;
	dest = (char *) malloc(sizeof(char) * nbytes);
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, s1, ft_strlen(s1) + 1);
	ft_strlcat(dest, s2, nbytes);
	return (dest);
}
