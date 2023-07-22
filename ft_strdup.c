/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:29:21 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/07/13 15:23:13 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		nbytes;

	nbytes = ft_strlen(s1) + 1;
	ptr = (char *) malloc(sizeof(char) * nbytes);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1, nbytes);
	return (ptr);
}

/*
int	main(void)
{
	char	str[] = "Hello World 42";

	printf("ptr: %p, cpy: %s, s1 ptr: %p\n", ft_strdup(str), ft_strdup(str), str);
	printf("ptr: %p, cpy: %s, s1 ptr: %p\n", strdup(str), strdup(str), str);
}
*/
