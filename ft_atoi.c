/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:28:48 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/07/13 14:23:35 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = 1;
	number = 0;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		if (sign == -1)
			number = (number * 10) - (str[i] - '0');
		else
			number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number);
}

/*
int	main(void)
{
	char	num[] = "    -2147483648";

	printf("%i\n", ft_atoi(num));
	printf("manual: %i\n", atoi(num));
}
*/
