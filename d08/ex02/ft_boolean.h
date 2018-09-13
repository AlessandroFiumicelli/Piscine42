/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 14:05:14 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/13 14:13:00 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define EVEN_MSG "I have an even number of arguments. \n"
# define ODD_MSG "I have an odd number of arguments. \n"
# define SUCCESS 1
# define TRUE 1
# define FALSE 0
# include <unistd.h>
# define EVEN(x) (x % 2 ? TRUE : FALSE)

typedef	int			t_bool;
#endif
