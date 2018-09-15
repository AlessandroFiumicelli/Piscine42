# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azaliaus <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/25 22:27:05 by azaliaus          #+#    #+#              #
#    Updated: 2018/02/25 22:35:11 by azaliaus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
SOURCE = srcs/main.c srcs/files.c srcs/string.c srcs/helper.c \
		 srcs/rush_finder.c srcs/rush_generator.c srcs/rush_validator.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SOURCE) -o $(NAME)

fclean: 
	/bin/rm -f $(NAME)

clean: fclean all
