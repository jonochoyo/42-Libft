/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:30:41 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/07/17 16:32:27 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
Applies the function ’f’ on each character of the string passed as argument, 
passing its index as first argument.  Each character is passed by address 
to ’f’ to be modified if necessary.

PARAMETERS:
s:	The string on which to iterate.
f:	The function to apply to each character.
*/

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
