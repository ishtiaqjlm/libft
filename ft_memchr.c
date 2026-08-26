/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishtiahm <ishtiahm@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 23:14:29 by ishtiahm          #+#    #+#             */
/*   Updated: 2026/08/26 23:14:29 by ishtiahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void    *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *p;

    p = s;
    while (n--)
    {
        if (*p == (unsigned char)c)
            return ((void *)p);
        p++;
    }
    return (NULL);
}
