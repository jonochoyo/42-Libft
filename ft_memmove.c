/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:26:12 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/07/11 17:43:00 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	i = len;
	d = (char *) dst;
	s = (const char *) src;
	if (d > s)
	{
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}

/*
int	main(void)
{
	char	source[] = "abcde";
	char	*destination = &source[2];
	char	destination2[] = "abcde";
	char	*source2 = &destination2[2];

	ft_memmove(destination, source, 3);
	ft_memmove(destination2, source2, 3);
	printf("Source is now: %s and Destination is: %s\n", source, destination);
	printf("Source is now: %s and Destination is: %s\n", source2, destination2);
	printf("source address: %p, dest address: %p", source, destination);
}
*/
