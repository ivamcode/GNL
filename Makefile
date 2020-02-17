.PHONY	=	all clean fclean
NAME	=	gnlh.a
BONUS	=	gnlh_b.a
SRC_C	=	get_next_line.c get_next_line_utils.c
SRC_BC	=	get_next_line_bonus.c get_next_line_utils_bonus.c
GNLO_C	=	${SRC_C:.c=.o}
GNLO_BC	=	${SRC_BC:.c=.o}
OBJS	=	${shell find . -name 'ft*.o'}
GCC		=	gcc -Wall -Wextra -Werror
RM		=	rm -rf
#S_NORMI	=	find . -name 'get*.c' -o -name 'get*.h'

all:	${NAME}

${NAME}:
		@${GCC} -c ${SRC_C}
		@ar rcs ${NAME} ${GNLO_C}

clean:
		@${RM} ${GNLO_C} ${GNLO_BC}

fclean:	clean
		@${RM} ${NAME} gnlh_b.a e_gnl a.out a.out.dSYM e_gnl_b

clib:	fclean
		@clear
		@norminette get*.c get*.h #${${S_NORMI}}

bsito:	${BONUS}

${BONUS}:
		@${GCC} -c ${SRC_BC}
		@ar rcs ${BONUS} ${GNLO_BC}

gnl_e:	bsito
		@${GCC} gnlh_b.a main.c -o e_gnl_b
		@./e_gnl_b

gnl:
		@${GCC} -D BUFFER_SIZE=11 ${SRC_C} main.c -o e_gnl
		@echo "Compilados <-get_next_line-> y <-get_next_line_utils->"
		@./e_gnl

debug:
		$(GCC)  -I ./ -c $(SRC_C) -g

re:		fclean all gnl

re_b:	fclean bsito gnl_e
