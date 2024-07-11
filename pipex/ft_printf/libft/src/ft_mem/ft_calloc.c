/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanza-zant <hanza-zant@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 13:22:47 by ajordan-          #+#    #+#             */
/*   Updated: 2024/07/11 09:38:21 by hanza-zant       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <stdlib.h>
*	DESCRIPTION
*	The calloc() function contiguously allocates enough space for count objects 
*	that are size bytes of memory each and returns a pointer to the allocated 
*	memory.  The allocated memory is filled with bytes of value zero.
*	PARAMETERS
*	#1. The count of objects to allocate.
*	#2. The size of bytes in each object.
*	RETURN VALUES
*	If successful, calloc() function returns a pointer to allocated memory. 
*	If there is an error, they return a NULL pointer.
*/

#include "../../../include/libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == 0)
		return (ptr);
	ft_bzero(ptr, count * size);
	return (ptr);
}
