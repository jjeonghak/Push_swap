# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 13:14:32 by jeonghak          #+#    #+#              #
#    Updated: 2022/03/06 11:35:36 by jeonghak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifdef BONUS
	OBJ_ALL = ${OBJS} ${OBJS_B}
else
	OBJ_ALL = ${OBJS}
endif

NAME = libft.a

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \
	get_next_line.c

SRCS_B = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

OBJS = ${SRCS:.c=.o}
OBJS_B = ${SRCS_B:.c=.o}


all: ${NAME}

${NAME}: ${OBJ_ALL}
	ar rcs ${NAME} ${OBJ_ALL}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

bonus:
	make BONUS=1 all

clean:
	${RM} ${OBJS} ${OBJS_B}

fclean: clean
	${RM} ${NAME}

re: clean all

.PHONY: bonus fclean clean re all
