CC		= c++
FLAGS	= -g -Wall -Wextra -Werror -std=c++98

EXT		= .out
RM		= rm -rf

NAME	= bureaucrat${EXT}
SRCS	=	Bureaucrat.cpp					\
			Form.cpp						\
			Intern.cpp						\
			ShrubberyCreationForm.cpp		\
			RobotomyRequestForm.cpp			\
			PresidentialPardonForm.cpp		\
			main.cpp

OBJS	= ${SRCS:%.cpp=%.o}
DEP		= ${OBJS:%.o=%.d}

all		: ${NAME}

${NAME}	:	${OBJS}
	${CC} ${FLAGS} $^ -o $@

%.o		:	%.cpp
	${CC} ${FLAGS} -MMD -c $< -o $@

-include ${DEP}

#!--DEBUG

ARGS	= test 5 7

do		:	${NAME}
	@echo
	@./$^ ${ARGS}

debug	:	${NAME}
	@lldb -- ./$^  ${ARGS}

leaks	:	${NAME}
	@leaks --atExit -- ./$^  ${ARGS}

norm	:
	cpplint ${SRCS}

#!--DEBUG

clean	:
	${RM} ${OBJS} ${DEP}

fclean	: clean
	${RM} ${NAME}

re		: fclean all

.PHONY : all clean fclean re norm do debug
