/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:11:21 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/07/12 16:54:05 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	if (s[i] == (char) c)
		return ((char *) &(s[i]));
	i--;
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *) &(s[i]));
		i--;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	str[] = "Hello World 42";
	int	chr = 'l';

	printf("%p\n", ft_strrchr(str, chr));
	printf("%c\n", *ft_strrchr(str, chr));
	printf("%p\n", strrchr(str, chr));
	printf("%p\n", &str[9]);
}
*/
