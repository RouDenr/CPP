CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98

EXT		= .out
RM		= rm -rf

NAME		= 	span
NAME_EXT	= 	${NAME}${EXT}

SRCS	=	Span.cpp	\
			main.cpp

OBJS	= ${SRCS:%.cpp=%.o}
DEP		= ${OBJS:%.o=%.d}

all		: ${NAME_EXT}

${NAME_EXT}	:	${OBJS}
	${CC} ${FLAGS} $^ -o $@

%.o		:	%.cpp
	${CC} ${FLAGS} -MMD -c $< -o $@

-include ${DEP}

#!--DEBUG

ARGS	= test 5 7

do		:	${NAME_EXT}
	@echo
	@./$^ ${ARGS}

debug	:	${NAME_EXT}
	@lldb -- ./$^$ ${ARGS}

leaks	:	${NAME_EXT}
	@leaks --atExit -- ./$^  ${ARGS}

norm	:
	cpplint ${SRCS}

#!--DEBUG

clean	:
	${RM} ${OBJS} ${DEP}

fclean	: clean
	${RM} ${NAME_EXT}

re		: fclean all

.PHONY : all clean fclean re norm do debug
