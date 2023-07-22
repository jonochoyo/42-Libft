/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:29:03 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/07/13 14:48:52 by jchoy-me         ###   ########.fr       */
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
	if (count > max || size > max || count * size > max)
		return (NULL);
	nbytes = count * size;
	ptr = malloc(nbytes);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nbytes);
	return (ptr);
}

/*
int	main(void)
{
	size_t	count = 6;
	size_t	size = 4;
	size_t	i = 0;
	char	*ptr = ft_calloc(count, size);
	char	*ptr2 = ft_calloc(0, 0);

	printf("Return of ft_calloc(0, 0): %p ", ptr2);
	printf("Value: %i\n", *(ptr2));
	while (i < count * size)
	{
		printf("%i, ", ptr[i]);
		printf("index : %zu\n", i);
	 	i++;
	}
}
*/
