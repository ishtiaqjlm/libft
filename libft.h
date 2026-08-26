/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishtiahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 12:34:30 by ishtiahm          #+#    #+#             */
/*   Updated: 2026/08/26 17:23:26 by ishtiahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
/*
typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;
*/
/* prototypes */
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_tolower(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
#endif
