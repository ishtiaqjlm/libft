/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishtiahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 17:28:23 by ishtiahm          #+#    #+#             */
/*   Updated: 2026/08/26 17:29:15 by ishtiahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION :
	The function ft_memmove copies n bytes from memory area src to memory
	area dst. The memory areas may overlap: if the dst pointer is found
	to be between the src pointer and the index n, copying will be done
	back to front to prevent data being modified before being copied.
	Otherwise it will be done front to back	to preserve data.

	RETURN VALUE :
	A pointer to dst.
*/

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dp;
	unsigned const char	*sp;

	if (src == dst)
		return (dst);
	dp = (unsigned char *)dst;
	sp = (unsigned const char *)src;
	if (sp < dp && sp + n > dp)
		while (n--)
			*(dp + n) = *(sp + n);
	else
	{
		while (n--)
		{
			*dp = *sp;
			sp++;
			dp++;
		}
	}
	return (dst);
}
