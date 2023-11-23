/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:56:04 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/11/22 17:24:28 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef unsigned char	t_uc;

int						ft_toupper(int x);
int						ft_tolower(int x);
char					*ft_substr(char const *s, unsigned int start,
							size_t len);
char					*ft_strtrim(char const *s1, char const *set);
char					*ft_strrchr(const char *str, int c);
char					*ft_strnstr(const char *big, const char *little,
							size_t len);
int						ft_strncmp(const char *str1, const char *str2,
							size_t n);
char					*ft_strmapi(char const *s, char (*f)(unsigned int,
								char));
size_t					ft_strlen(const char *str);
size_t					ft_strlcpy(char *dest, const char *src, size_t size);
size_t					ft_strlcat(char *dest, const char *src, size_t size);
char					*ft_strjoin(char const *s1, char const *s2);
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
char					*ft_strdup(const char *s);
char					*ft_strchr(const char *str, int c);
char					**ft_split(const char *s, char c);
void					*ft_memset(void *dest, int c, size_t count);
void					*ft_memmove(void *dest, const void *src, size_t count);
void					*ft_memcpy(void *dest, const void *src, size_t n);
int						ft_memcmp(const void *str1, const void *str2, size_t n);
void					*ft_memchr(const void *str, int c, size_t n);
char					*ft_itoa(int n);
int						ft_isdigit(int x);
int						ft_isascii(int x);
int						ft_isalpha(int x);
int						ft_isalnum(int x);
void					*ft_calloc(size_t n, size_t size);
void					ft_bzero(void *s, size_t n);
int						ft_atoi(const char *str);
void					ft_putstr_fd(char *s, int fd);
void					ft_putnbr_fd(int n, int fd);
void					ft_putendl_fd(char *s, int fd);
void					ft_putchar_fd(char c, int fd);

typedef struct s_list
{
	void				*content;
	struct s_list		*next;
}						t_list;

t_list					*ft_lstnew(void *content);

#endif