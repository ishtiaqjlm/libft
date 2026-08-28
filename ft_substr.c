/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishtiahm <ishtiahm@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 01:20:17 by ishtiahm          #+#    #+#             */
/*   Updated: 2026/08/28 01:20:17 by ishtiahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	DESCRIPTION :
	The function ft_substr extracts a substring from the given string by
	allocating sufficient memory for the new string starting at index start
	and ending at len characters.

	RETURN VALUE :
	A pointer to the new string.
	NULL if the memory allocation fails.
*/


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*str;
    size_t	i;
    size_t	str_len;

    if (!s)
        return (NULL);
    str_len = ft_strlen(s);
    if (start >= str_len)
        return (ft_strdup(""));
    if (len > str_len - start)
        len = str_len - start;
    str = malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    i = 0;
    while (i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
