/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:19:50 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/07/11 15:13:31 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}

/*
int	main(void)
{
	printf("%i\n", ft_isprint(' '));
	printf("%i\n", ft_isprint('0'));
	printf("%i\n", ft_isprint('\t'));
	printf("%i\n", ft_isprint(127));
}
*/
