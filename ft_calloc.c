/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishtiahm <ishtiahm@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 00:13:36 by ishtiahm          #+#    #+#             */
/*   Updated: 2026/08/28 18:05:45 by ishtiahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdint.h>
#include "libft.h"

/*
	DESCRIPTION :
	The function ft_calloc allocates memory for an array of count elements
	of size bytes each and sets the memory to zero.

	RETURN VALUE :
	The pointer to the allocated memory. NULL if the memory allocation fails.
*/

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*r;

	if (nelem == 0 || elsize == 0)
		return (malloc(1));
	if (nelem != 0 && elsize > SIZE_MAX / nelem)
		return (NULL);
	r = malloc(nelem * elsize);
	if (!r)
		return (NULL);
	ft_bzero(r, elsize * nelem);
	return (r);
}
