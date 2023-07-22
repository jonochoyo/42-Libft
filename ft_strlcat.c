/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:26:32 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/07/12 13:23:47 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && (i < dstsize))
		i++;
	while ((i + j + 1) < dstsize && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*
int	main(void)
{
	char	src[] = "World";
	char	dest[11] = "Hello";
	char	src2[] = "World";
	char	dest2[11] = "Hello";
	size_t	size = 11;

	printf("dst: %s, and size: %zu\n", dest, ft_strlcat(dest, src, size));
	printf("dst: %s, and size: %zu\n", dest2, strlcat(dest2, src2, size));
}
*/
