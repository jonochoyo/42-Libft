/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:42:54 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/07/20 14:39:34 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
Takes as a parameter a node and frees the memory of the node’s content using 
the function ’del’ given as a parameter and free the node. The memory of
’next’ must not be freed.

PARAMETERS:
lst:	The node to free.
del:	The address of the function used to delete the content.

EXTERNAL FUNCTIONS:
free
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
