# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/17 17:55:57 by vnafissi          #+#    #+#              #
#    Updated: 2022/01/17 17:56:02 by vnafissi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#$@ The filename representing the target.
#$< The filename of the first prerequisite.
#$? The names of all prerequisites that are newer than the target, separated by spaces.
#$^ The filenames of all the prerequisites, separated by spaces.
#This list has duplicate filenames removed since for most uses,
#such as compiling, copying, etc., duplicates are not wanted.

#*********** VARIABLES ************

#VARIABLE=VALUE
CC = gcc
CFLAGS = -Wall -Werror -Wextra -Wconversion
LIBFTDIRNAME = libft
LIBFTNAME = libft.a
INCS = -I ./includes -I ./libft

NAME_CLIENT = client.a
NAME_SERVER = server.a

SRCS_CLIENT = client.c
SRCS_SERVER = server.c

#${SRCS:.c=.o} means, take the variable value ${SRCS},
# which is a string composed of words separated by spaces,
# and for each word, replace the suffix .c with .o
OBJS_CLIENT=$(SRCS_CLIENT:.c=.o)
OBJS_SERVER=$(SRCS_SERVER:.c=.o)

#*********** RULES ************

#old fashioned suffix rule : ‘.c.o’ (target = '.o', source = '.c')
# is equivalent to the pattern rule ‘%.o : %.c’. which is up to date.
%.o : %.c
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} ${INCS}

#command ar : creates, modifies, and extracts from archives.
#An archive is a single file holding a collection of other files in a structure
# that makes it possible to retrieve the original individual files
#lib statique under UNIX = big file which contains all the *.o files,
#to be used for the compilator

#$(MAKE) -C subdir : call make froma another directory.
#Flag -C tells to go in mentioned directory : https://www.gnu.org/software/make/manual/make.html#Recursion

all: $(NAME_CLIENT) $(NAME_SERVER)

$(NAME_CLIENT): $(OBJS_CLIENT)
	${MAKE} -C libft
	${CC} -g ${CFLAGS} -o ${NAME_CLIENT} ${OBJS_CLIENT} libft/libft.a ${INCS}

$(NAME_SERVER): $(OBJS_SERVER)
	${MAKE} -C libft
	${CC} -g ${CFLAGS} -o ${NAME_SERVER} ${OBJS_SERVER} libft/libft.a ${INCS}

clean:
	${MAKE} -C ${LIBFTDIRNAME} clean
	rm -f ${OBJS_CLIENT} ${OBJS_SERVER}

fclean: clean
	${MAKE} -C ${LIBFTDIRNAME} fclean
	rm -f $(NAME_CLIENT) $(NAME_SERVER)

re: fclean all

#in case files exist with same name as targets
.PHONY: all clean fclean re bonus