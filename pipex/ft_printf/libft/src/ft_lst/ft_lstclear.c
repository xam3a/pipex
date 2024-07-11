/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanza-zant <hanza-zant@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 14:53:46 by ajordan-          #+#    #+#             */
/*   Updated: 2024/07/11 09:37:59 by hanza-zant       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Deletes and frees the given element and every successor of that element, 
*	using the function ’del’ and free(3). Finally, the pointer to the list must 
*	be set to NULL.
*	PARAMETERS
*	#1. The adress of a pointer to an element.
*	#2. The adress of the function used to delete the content of the element.
*	RETURN VALUES
*	-
*/

#include "../../../include/libft.h"
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux_lst;

	if (*lst)
	{
		while (*lst)
		{
			aux_lst = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = aux_lst;
		}
		*lst = 0;
	}
}
