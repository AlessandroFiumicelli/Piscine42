# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/18 18:35:29 by alfiumic          #+#    #+#              #
#    Updated: 2018/09/19 11:58:43 by alfiumic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- MakeFile -*-

NAME = do-op

SOURCE = srcs/*.c

all: $(NAME)

$(NAME):
	gcc -c $(SOURCE) -Werror -Wall -Wextra
	gcc -o $(NAME) -Werror -Wall -Wall *.o

clean:
	/bin/rm *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
