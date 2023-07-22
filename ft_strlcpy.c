/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:26:22 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/07/11 18:50:33 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
int	main(void)
{
	char	src[] = "Hello World";
	char	dst[] = "Goodbye World";

	char	src2[] = "Hello World";
	char	dst2[] = "Goodbye World";

	size_t	size = 0;
	size_t	size2 = 12;

	printf("src: %s, dst: %s, size: %zu\n", src, dst, ft_strlcpy(dst, src, size));
	printf("src: %s, dst: %s, size: %zu\n", src, dst, ft_strlcpy(dst, src, size2));

	printf("CLib\n");
	printf("src: %s, dst: %s, size: %zu\n", src2, dst2, strlcpy(dst2, src2, size));
	printf("src: %s, dst: %s, size: %zu\n", src2, dst2, strlcpy(dst2, src2, size2));
}
*/
