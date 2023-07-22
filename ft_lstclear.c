/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:29:33 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/07/20 13:37:55 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
Deletes and frees the given node and every successor of that node, using the 
function ’del’ and free(3).
Finally, the pointer to the list must be set to NULL.

PARAMETERS:
lst:	The address of a pointer to a node.
del:	The address of the function used to delete the content of the node.

EXTERNAL FUNCTIONS:
free
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		ptr = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
	*lst = NULL;
}
