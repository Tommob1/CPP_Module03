# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btomlins <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/02 17:59:31 by btomlins          #+#    #+#              #
#    Updated: 2024/11/03 01:49:03 by btomlins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++

C++_FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
INFILES = main.cpp\
		  ClapTrap.cpp\
		  ScavTrap.cpp\

OBJFILES = $(INFILES:.cpp=.o)

NAME = Serena_my_love

all: $(NAME)

$(NAME):$(OBJFILES)
	$(C++) $(C++_FLAGS) $(OBJFILES) -o $(NAME)

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re