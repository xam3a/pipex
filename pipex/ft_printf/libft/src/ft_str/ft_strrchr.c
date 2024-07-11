/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanza-zant <hanza-zant@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:09:42 by ajordan-          #+#    #+#             */
/*   Updated: 2024/07/11 09:39:18 by hanza-zant       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The strchr() function locates the last occurrence of c (converted to a 
*	char) in the string pointed to by s. The terminating null character is 
*	considered to be part of the string; therefore if c is `\0', the functions 
*	locate the terminating `\0'.
*	PARAMETERS
*	#1. The string in which to check the occurence of c.
*	#2. The character to check the occurence of.
*	RETURN VALUES
*	The function strrchr() returns a pointer to the located 
*	character, or NULL if the character does not appear in the string.
*/

#include "../../../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
