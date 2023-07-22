/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:21:54 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/07/11 14:49:28 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

/*
int	main(void)
{
	printf("%i\n", ft_isalpha('T'));
	printf("%i\n", ft_isalpha('a'));
	printf("%i\n", ft_isalpha('9'));
	printf("%i\n", ft_isalpha(' '));
}
*/
