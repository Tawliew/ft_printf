NAME = libftprintf.a 
CC = gcc
CFLAGS =-c -Wall -Werror -Wextra  
RM = rm -f
SRCS =	ft_printf.c 

#.c to .o
OBJ =		${SRCS:%.c=%.o}

all:		${NAME}

${NAME}:	${OBJ}
			ar rcs	${NAME}		${OBJ}

%.o:		%.c
			${CC}	${CFLAGS}	$< -o $@

test:
	@echo "\n------------------------------------------------------------\n"
	@${CC}	${CCFLAGS}	main.c ${NAME} && ./a.out ronaldinho 
	@echo "\n------------------------------------------------------------\n"
clean:
			${RM}	${OBJ}

fclean:		clean
			${RM}	${NAME}

re: fclean all test 


.PHONY: all clean fclean re

