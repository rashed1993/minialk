# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/22 15:30:12 by ral-dhah          #+#    #+#              #
#    Updated: 2023/02/09 16:19:34 by ral-dhah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SERVERSRC = server.c server_libft.c
CLIENTSRC = client.c client_libft.c

SERVEROBJ = $(SERVERSRC:.c=.o)
CLIENTOBJ = $(CLIENTSRC:.c=.o)

RM = rm -rf
CC = gcc
CFLAGS = -Wall -Werror -Wextra

.c.o: ${CC} ${CFLAGS} -c $< o ${<:.c=.o}

all: server client

server : $(SERVEROBJ)
		$(CC) $(CFLAGS) $(SERVEROBJ) -o server
client : $(CLIENTOBJ)
		$(CC) $(CFLAGS) $(CLIENTOBJ) -o client

clean :
		 $(RM) $(CLIENTOBJ) $(SERVEROBJ)
fclean : clean
		$(RM) server client

re : fclean all

.PHONY: all .c.o clean fclean re server client