/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:30:30 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/07/11 14:30:34 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*
char	func_to_upper(unsigned int i, char c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	(void) i;
	return (c);
}

int	main(void)
{
	char	str[] = "hello";

	void	*f = &func_to_upper;
	printf("%s\n", ft_strmapi(str, f));
}
*/
