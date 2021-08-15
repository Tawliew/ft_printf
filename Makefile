NAME	=	libftprintf.a 
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra  

LIBFT	=	libft/ft_strchr.c	\
			libft/ft_itoa.c		\
			libft/ft_utoa.c		\
			libft/ft_utoh.c		\
			libft/ft_calloc.c	\
			libft/ft_toupper.c	\
			libft/ft_size_ptr.c	\
			

FORMAT	=	format/_s_verifier.c	\
			format/_c_verifier.c	\
			format/_di_verifier.c	\
			format/_u_verifier.c	\
			format/_x_verifier.c	\
			format/_X_verifier.c	\
			format/_p_verifier.c	\

SRCS 	=	ft_printf.c	\
			${FORMAT}	\
			${LIBFT}	\

#.c to .o
OBJ		=	${SRCS:%.c=%.o}

all:		${NAME}

${NAME}:	${OBJ}
			ar rcs	${NAME}		${OBJ}

%.o:		%.c
			${CC}	-c ${CFLAGS}	$< -o $@
 
test:
			@echo "\n------------------------------------------------------------\n"
			@${CC} main.c ${NAME} && valgrind ./a.out --leak-check=full 
			@echo "\n------------------------------------------------------------\n"
test2:
			@echo "\n------------------------------------------------------------\n"
			@clang	main2.c ${NAME} && ./a.out 
			@echo "\n------------------------------------------------------------\n"

test3:
			@echo "\n------------------------------------------------------------\n"
			@clang	main3.c ${NAME} && valgrind ./a.out --leak-check=full 
			@echo "\n------------------------------------------------------------\n"

clean:
			rm -f	${OBJ}

fclean:		clean
			rm -f	${NAME}

re: fclean all test$(v) 


.PHONY: all clean fclean re

