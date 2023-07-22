/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:30:41 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/07/11 14:30:44 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &(s[i]));
		i++;
	}
}

/*
void	func_to_lower(unsigned int i, char *str)
{
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

int	main(void)
{
	char	str[] = "HELLO";

	void	*f = &func_to_lower;
	ft_striteri(str, f);
	printf("%s\n", str);
}
*/
