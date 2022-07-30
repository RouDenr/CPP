CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98

EXT		= .out
RM		= rm -rf

NAME	= megaphone${EXT}
SRCS	= megaphone.cpp
OBJS	= ${SRCS:%.cpp=%.o}

all		: ${NAME}

${NAME}	:	${OBJS}
	${CC} ${FLAGS} $^ -o $@

%.o		:	%.cpp
	${CC} ${FLAGS} -c $< -o $@

#!--DEBUG

norm	:
	cpplint ${SRCS}

#!--DEBUG

clean	:
	${RM} ${OBJS}

fclean	: clean
	${RM} ${NAME}

re		: fclean all
