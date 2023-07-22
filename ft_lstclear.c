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

/*
void delete(void *data)
{
	free(data);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	int	data;
	int	data2;

	data = 42;
	data2 = 24;
	node1 = ft_lstnew(&data);
	node2 = ft_lstnew(&data2);

	ft_lstadd_back(&node1, node2);

	printf("Node content is: %i\n", *(int *)node1 -> content);
	printf("Node content is: %i\n", *(int *)node2 -> content);

	ft_lstclear(&node1, delete);

	printf("Node content after delete is: %i\n", *(int *)node2 -> content);
	printf("Node content after delete is: %i\n", *(int *)node1 -> content);
}
*/
