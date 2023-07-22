/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:30:10 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/07/11 14:30:11 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
Allocates (with malloc(3)) and returns an array of strings obtained by 
splitting ’s’ using the character ’c’ as a delimiter.  The array must end
with a NULL pointer.

PARAMETERS:
s:	The string to be split.
c:	The delimiter character.

RETURN VALUE:
The array of new strings resulting from the split.
NULL if the allocation fails.

EXTERNAL FUNCTIONS:
malloc, free
*/

static int	ft_nwords(char const *s, char c)
{
	int	i;
	int	nwords;

	i = 0;
	nwords = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			nwords++;
			while (s[i] != c && s[i] != '\0')
				i++;
			if (s[i] == '\0')
				return (nwords);
		}
		i++;
	}
	return (nwords);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**strs;

	strs = (char **) malloc (sizeof(char *) * (ft_nwords(s, c) + 1));
	if (strs == NULL || s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_nwords(s, c))
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			strs[j] = ft_substr(s, start, i - start);
			j++;
		}
		i++;
	}
	strs[j] = NULL;
	return (strs);
}
