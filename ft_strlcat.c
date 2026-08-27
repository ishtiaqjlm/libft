/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishtiahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 13:26:01 by ishtiahm          #+#    #+#             */
/*   Updated: 2026/08/27 13:49:29 by ishtiahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;
	size_t	original_len;

	i = 0;
	dest_len = 0;
	src_len = ft_strlen(src);
	while (dest_len < size && dst[dest_len])
		dest_len++;
	if (dest_len == size)
		return (size + src_len);
	original_len = dest_len;
	while (src[i] && dest_len + 1 < size)
		dst[dest_len++] = src[i++];
	dst[dest_len] = '\0';
	return (original_len + src_len);
}
