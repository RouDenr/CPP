CC		= c++
FLAGS	= -g -Wall -Wextra -Werror -std=c++98

EXT		= .out
RM		= rm -rf

NAME	= phonebook${EXT}
SRCS	= 	PhoneBook.cpp	\
			Contact.cpp		\
			main.cpp

OBJS	= ${SRCS:%.cpp=%.o}
DEP		= ${OBJS:%.o=%.d}

%.o		:	%.cpp
	${CC} ${FLAGS} -MMD -c $< -o $@

all		: ${NAME}


${NAME}	:	${OBJS}
	${CC} ${FLAGS} $^ -o $@

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
