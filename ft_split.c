/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishtiahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 14:52:01 by ishtiahm          #+#    #+#             */
/*   Updated: 2026/08/28 18:15:49 by ishtiahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
	DESCRIPTION :
	The function ft_split allocates and copies an array of strings by 
	splitting the given string s using the given separator c.

	RETURN VALUE :
	An array of strings resulting from the split. NULL if the memory
	allocation fails.
*/
static int	ft_count_words(const char *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			words++;
		if (i > 0 && s[i] != c && s[i - 1] == c)
			words++;
		i++;
	}
	return (words);
}

static void	ft_free(char **arr, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	*ft_get_word(char const *s, char c, int *i)
{
	int	start;
	int	len;

	while (s[*i] && s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	len = *i - start;
	return (ft_substr(s, start, len));
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		wordcount;
	int		i;
	int		j;

	wordcount = ft_count_words(s, c);
	strs = malloc(sizeof(*strs) * (wordcount + 1));
	if (!strs)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		strs[j] = ft_get_word(s, c, &i);
		if (!strs[j])
		{
			ft_free(strs, j);
			return (NULL);
		}
		j++;
	}
	strs[j] = NULL;
	return (strs);
}
