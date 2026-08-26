/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishtiahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 15:21:32 by ishtiahm          #+#    #+#             */
/*   Updated: 2026/08/26 16:43:39 by ishtiahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The function ft_memset fills the first len bytes of the memory area
	pointed	to by b with the byte c. Both b and c are interpreted as 
	unsigned char.

	RETURN VALUE :
	A pointer to memory area s.
*/
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	ch;

	p = (unsigned char *)s;
	ch = c;
	while (n--)
	{
		*p = ch;
		p++;
	}
	return (s);
}
