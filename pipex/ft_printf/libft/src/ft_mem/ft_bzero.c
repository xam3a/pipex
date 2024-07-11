/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanza-zant <hanza-zant@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:40:05 by ajordan-          #+#    #+#             */
/*   Updated: 2024/07/11 09:38:18 by hanza-zant       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The bzero() function writes n zeroed bytes to the string s.  
*   If n is zero, bzero() does nothing.
*	PARAMETERS
*	#1. The pointer from which to begin erasing data.
*	#2. The number of bytes to erase.
*	RETURN VALUES
*	- 
*/

#include "../../../include/libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*str_c;

	str_c = (char *)s;
	i = 0;
	while (i < n)
	{
		*(str_c + i) = 0;
		i++;
	}
}
