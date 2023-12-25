SRCS = quickSort.cpp \
	   main.cpp

OBJ = ${SRCS:.cpp=.o}

CFLAGS = -std=c++11 -fsanitize=address -g
CC = c++
RM = rm -f

NAME = quick
HEADER = quickSort.hpp

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp ${HEADER}
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:clean all fclean re