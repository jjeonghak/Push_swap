NAME = push_swap

LIB_DIR = ./libft/
LIB = libft.a
LIBS = ${addprefix ${LIB_DIR}, ${LIB}}

CC = gcc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = ./srcs/
SRC = push_swap_func.c \
	deque_func1.c \
	deque_func2.c \
	sort_deque1.c \
	sort_deque2.c \
	push_swap_command1.c \
	push_swap_command2.c \
	push_swap_command3.c \
	utils.c \
	main.c
SRCS = ${addprefix ${SRC_DIR}, ${SRC}}

OBJ_DIR = ./objs/
OBJ = ${SRC:.c=.o}
OBJS = ${addprefix ${OBJ_DIR}, ${OBJ}}

INC_DIR = ./srcs/
INC = push_swap.h
INCS = ${addprefix ${INC_DIR}, ${INC}}

all: ${NAME}

${NAME}: ${OBJ_DIR} ${OBJS} ${LIBS}
	${CC} ${OBJS} -o ${NAME} 

${OBJ_DIR}:
	mkdir -p ${OBJ_DIR}

${OBJS}: ${SRCS} ${INCS}
	${CC} ${CFLAGS} -c $< -o $@

${LIBS}:
	make all -C ${LIB_DIR}

clean:
	make fclean -C ${LIB_DIR}
	${RM} ${OBJS}
	${RM} ${OBJ_DIR}

fclean: clean
	${RM} ${NAME}

re: clean all

.PHONY: all clean fclean re
