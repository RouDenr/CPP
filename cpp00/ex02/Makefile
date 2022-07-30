CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98

EXT		= .out
RM		= rm -rf

NAME	= accounts_log${EXT}
SRCS	= 	Account.cpp	\
			test.cpp

OBJS	= ${SRCS:%.cpp=%.o}
DEP		= ${OBJS:%.o=%.d}


all		: ${NAME}

${NAME}	:	${OBJS}
	${CC} ${FLAGS} $^ -o $@

%.o		:	%.cpp
	${CC} ${FLAGS} -MMD -c $< -o $@

-include ${DEP}

#!--DEBUG

do		:	${NAME}
	@./$^

debug		:	${NAME}
	@lldb -- ./$^

norm	:
	cpplint ${SRCS}

#!--DEBUG

clean	:
	${RM} ${OBJS} ${DEP}

fclean	: clean
	${RM} ${NAME}

re		: fclean all

.PHONY : all clean fclean re norm do debug
