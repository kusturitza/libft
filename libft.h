/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 15:07:31 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/10/10 18:17:46 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "stddef.h"
# include "stdbool.h"

int		ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
bool	ft_isalpha(int c);
bool	ft_isascii(int c);
bool	ft_isdigit(int c);
bool	ft_isprint(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
size_t	ft_strlcat(char *dest, char *src, size_t size);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, size_t n);
char	ft_tolower(int c);
char	ft_toupper(int c);

#endif
