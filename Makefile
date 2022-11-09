# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chanwopa <chanwopa@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 12:24:26 by chanwopa          #+#    #+#              #
#    Updated: 2022/11/09 13:16:44 by chanwopa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
CFILES = ft_atoi.c ft_isprint.c ft_memmove.c ft_strchr.c ft_strmapi.c \
		ft_toupper.c ft_bzero.c ft_itoa.c ft_memset.c ft_strdup.c ft_strncmp.c \
		ft_calloc.c ft_putchar_fd.c ft_striteri.c ft_strnstr.c ft_isalnum.c \
		ft_putendl_fd.c ft_strjoin.c ft_strrchr.c ft_isalpha.c ft_memchr.c \
		ft_putnbr_fd.c ft_strlcat.c ft_strtrim.c ft_isascii.c ft_memcmp.c \
		ft_putstr_fd.c ft_strlcpy.c ft_substr.c ft_isdigit.c ft_memcpy.c \
		ft_split.c ft_strlen.c ft_tolower.c ft_lstnew.c ft_lstadd_front.c \
		ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
		ft_lstiter.c ft_lstmap.c
OBJFILES = $(CFILES:.c=.o)
NAME = libft.a
LIBC = ar -rcs
RM = rm -rf

all: ${NAME}

${NAME}: ${OBJFILES}
	${LIBC} ${NAME} ${OBJFILES}

${OBJ}: ${CFILES}
	$(CC) $(CFLAGS) -I ./ -c ${CFILES}

clean:
	${RM} ${OBJFILES}

fclean: clean
	${RM} ${NAME}

bonus: all

re: fclean all