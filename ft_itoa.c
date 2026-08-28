/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishtiahm <ishtiahm@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 00:19:46 by ishtiahm          #+#    #+#             */
/*   Updated: 2026/08/29 00:19:46 by ishtiahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
	DESCRIPTION :
	The function ft_itoa converts the integer n into a string of characters.

	RESULT VALUE :
	The string of the converted integer.
*/
static size_t	ft_numlen(long num)
{
	size_t	len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		len++;
		num = -num;
	}
	while (num > 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

static void	ft_fill_number(long num, char *str, size_t len)
{
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
		len--;
	}
	while (len)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	len;
	char	*str;

	num = n;
	len = ft_numlen(num);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	ft_fill_number(num, str, len);
	return (str);
}
