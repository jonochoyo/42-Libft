/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:32:08 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/07/21 14:26:54 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
Iterates the list ’lst’ and applies the function ’f’ on the content of each 
node. Creates a new list resulting of the successive applications of the 
function ’f’. The ’del’ function is used to delete the content of a node 
if needed.

PARAMETERS:
lst:	The address of a pointer to a node.
f:		The address of the function used to iterate on the list.
del:	The address of the function used to delete the content of a node 
		if needed.

RETURN VALUE:
The new list.
NULL if the allocation fails.

EXTERNAL FUNCTIONS:
malloc, free
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnode;
	void	*newdata;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	newlst = NULL;
	while (lst != NULL)
	{
		newdata = f(lst->content);
		newnode = ft_lstnew(newdata);
		if (newnode == NULL)
		{
			ft_lstclear(&newlst, del);
			del(newdata);
		}
		ft_lstadd_back(&newlst, newnode);
		lst = lst->next;
	}
	return (newlst);
}
