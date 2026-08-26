/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishtiahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 16:57:08 by ishtiahm          #+#    #+#             */
/*   Updated: 2026/08/26 17:22:47 by ishtiahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION :
	The function ft_memcpy copies n bytes from memory area src to memory
	area dst.
	Does not account for memory overlaps. Use ft_memmove if the memory areas
	overlap or might overlap.

	RETURN VALUE :
	A pointer to dst. NULL if src and dst are both NULL.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dp;
	const unsigned char	*sp;

	if (dst == src)
		return (dst);
	dp = (unsigned char *)dst;
	sp = (const unsigned char *)src;
	while (n != 0)
	{
		*dp = *sp;
		dp++;
		sp++;
		n--;
	}
	return (dst);
}
