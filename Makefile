NAME = libftprintf.a 
CC = gcc
CFLAGS =-c -Wall -Werror -Wextra  
FORMAT =	format/_s_verifier.c \
			format/_c_verifier.c \
			format/_d_verifier.c \


SRCS =	ft_printf.c \
		${FORMAT}

#.c to .o
OBJ =		${SRCS:%.c=%.o}

all:		${NAME}

${NAME}:	${OBJ}
			ar rcs	${NAME}		${OBJ}

%.o:		%.c
			${CC}	${CFLAGS}	$< -o $@

test:
	@echo "\n------------------------------------------------------------\n"
	@${CC}	${CCFLAGS}	main.c ${NAME} && ./a.out 
	@echo "\n------------------------------------------------------------\n"
clean:
			rm -f	${OBJ}

fclean:		clean
			rm -f	${NAME}

re: fclean all test 


.PHONY: all clean fclean re

