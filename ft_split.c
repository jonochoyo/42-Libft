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

static int	ft_nwords(char const *s, char c)
{
	int	i;
	int	nwords;

	i = 0;
	nwords = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			if (s[i] == c)
			{
				nwords++;
			}
			i++;
		}
		nwords++;
	}
	return (nwords);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		nwords;
	char	**strs;

	nwords = ft_nwords(s, c);
	// Allocate memory for nwords (char *) pointers + 1 for the NULL pointer at the end of the array
	strs = (char **) malloc (sizeof(char *) * (nwords + 1));
	if (strs == NULL || s == NULL)
		return (NULL);
	i = 0; // original string char iterator
	j = 0; // words iterator
	// If first char of string is separator, move to the next one with start index of word. 
	if (s[0] == c)
		i++;
	k = i; // Start index of words
	// Iterate through string 's' and when find a separator, copy the previous string up until the sep. 
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			strs[j] = ft_substr(s, k, i - k);
			// Move to next word and start index after the sep
			j++;
			k = i + 1;
		}
		i++;
	}
	// Once reach NUL terminator, copy the last string if it is not an empty string and if last char is not separator.
	if (s[0] != '\0' && s[ft_strlen(s) - 1] != c)
		strs[j] = ft_substr(s, k, i - k);
	j++;
	// Add NULL for last pointer on array.
	strs[j] = NULL;
	return (strs);
}

// int	main(void)
// {
// 	// If strings is only a NUL terminator, the while won't run and we will run ft_substr(s, 0, 0) which will only output a NUL terminator and then the NULL pointer. 
// 	// If string is only the separator? Should output two empty words?
// 	char const	str[] = "4a4";
// 	char	c = '4';
// 	int	i = 0;

// 	char	**strs = ft_split(str, c);
// 	if (strs != NULL)
// 	{
// 		while (strs[i])
// 		{
// 			printf("%s\n", strs[i]);
// 			i++;
// 		}
// 		printf("%s\n", strs[i]);
// 	}
// 	else
// 	{
// 		printf("Error! Array could not be allocated");
// 	}
// 	return (0);
// }
