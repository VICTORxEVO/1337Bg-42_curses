/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:56:04 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/11/19 11:56:14 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_toupper(int x);
int ft_tolower(int x);
char    *ft_strrchr(const char *str, int c);
char    *ft_strnstr(const char *big, const char *little, size_t len);
int ft_strncmp(const char *str1, const char *str2, size_t n);
int ft_strlen(const char *str);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);
size_t  ft_strlcat(char *dest, const char *src, size_t size);
char    *ft_strchr(const char *str, int c);
void    *ft_memset(void *dest, int c, size_t count);
void    *ft_memmove(void *dest, const void *src, size_t count);
void    *ft_memcpy(void *dest, const void * src, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
int ft_isdigit(int x);
int ft_isascii(int x);
int	ft_isalpha(int x);
int ft_isalnum(int x);
void    ft_bzero(void *s, size_t n);






