/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 12:59:27 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/15 13:08:51 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH2_H
# define RUSH2_H
#include <unistd.h>
#include <stdlib.h>
# define TRUE			1
# define FALSE			0
# define BUFF_SIZE		512

typedef int	t_bool;

char	*ft_get_input(void);
void	ft_get_dimentions(char *str, int *x, int *y);
void	ft_find_rush(char *str, int x, int y);
char	*ft_load_rush(int n, int x, int y);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src);
int	ft_strcmp(char *s1, char *s2);
void	ft_print_error(void);

#endif
