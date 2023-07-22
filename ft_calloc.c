/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:29:03 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/07/20 13:22:42 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	max;
	size_t	nbytes;
	void	*ptr;

	max = 4294967295;
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (count * size > max)
		return (NULL);
	nbytes = count * size;
	ptr = malloc(nbytes);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nbytes);
	return (ptr);
}
