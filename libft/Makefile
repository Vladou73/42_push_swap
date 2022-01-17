# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 13:32:13 by vnafissi          #+#    #+#              #
#    Updated: 2021/12/02 18:33:19 by vnafissi         ###   ########.fr        #
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
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c \
ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_itoa.c ft_memchr.c \
ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
ft_substr.c ft_toupper.c ft_tolower.c

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
ft_lstiter.c ft_lstmap.c

#${SRCS:.c=.o} means, take the variable value ${SRCS},
# which is a string composed of words separated by spaces,
# and for each word, replace the suffix .c with .o
OBJS=$(SRCS:.c=.o)

OBJS_BONUS=$(SRCS_BONUS:.c=.o)

#*********** RULES ************

#syntax for target/rule :
#target/rule: dependencies
#        command

#old fashioned suffix rule : ‘.c.o’ (target = '.o', source = '.c')
# is equivalent to the pattern rule ‘%.o : %.c’. which is up to date.
%.o : %.c
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

#command ar : creates, modifies, and extracts from archives. 
#An archive is a single file holding a collection of other files in a structure
# that makes it possible to retrieve the original individual files
#lib statique under UNIX = big file which contains all the *.o files, 
#to be used for the compilator
$(NAME): $(OBJS)
	ar rcs $@ $^

all: $(NAME)

bonus: $(OBJS) $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

#in case files exist with same name as targets
.PHONY: all clean fclean re bonus