/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:11:21 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/07/12 16:54:05 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	if (s[i] == (char) c)
		return ((char *) &(s[i]));
	while (i > 0)
	{
		i--;
		if (s[i] == (char) c)
			return ((char *) &(s[i]));
	}
	return (NULL);
}
