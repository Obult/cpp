NAME		= awesomebook
OBJ			= *.o
CC			= c++
RM			= rm -f
HEADER		= -I headers/
CFLAGS		= -Wall -Werror -Wextra

all:		${NAME}

%.o:%.cpp
				$(CC) -c $(CFLAGS) $(HEADER) $< -o $@

clean:
				${RM} ${OBJ}

fclean:		clean
				${RM} ${NAME}

re:			fclean all

${NAME}:	${OBJ}
				${CC} ${CFLAGS} -o $@ $^

.PHONY: all clean fclean re