/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:25:45 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/07/11 15:50:11 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
int	main(void)
{
	char	str[] = "Hello";
	int	i;

	i = 0;
	ft_bzero(str, 3);
	while (i < 5)
	{
		printf("%c\n", str[i]);
		i++;
	}
}
*/
