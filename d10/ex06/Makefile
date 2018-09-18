# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/18 18:35:29 by alfiumic          #+#    #+#              #
#    Updated: 2018/09/18 18:39:18 by alfiumic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- MakeFile -*-

NAME = do-op

SOURCE = *.c

all: $(NAME)

$(NAME):
	gcc -c $(SOURCE)
	gcc -o $(NAME) *.o

clean:
	/bin/rm -f $(NAME)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
