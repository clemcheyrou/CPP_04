NAME		=	polymorphisme

OBJ_DIR		=	objs
SRC_DIR		=	$(shell find . -type d)

vpath %.cpp $(foreach dir, $(SRC_DIR), $(dir):)

HEADER		=	Animal.hpp		\
				Dog.hpp			\
				Cat.hpp			\
				WrongAnimal.hpp	\
				WrongCat.hpp

SRCS	 	=	main.cpp		\
				Animal.cpp		\
				Dog.cpp			\
				Cat.cpp			\
				WrongAnimal.cpp	\
				WrongCat.cpp


OBJS		=	$(SRCS:%.cpp=${OBJ_DIR}/%.o)

RM			=	rm -rf

CC			=	c++

CFLAGS		=	-Werror -Wall -Wextra -std=c++98 -g3

all:	${NAME}

$(NAME): ${OBJS} ${HEADER}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

$(OBJ_DIR)/%.o: %.cpp ${HEADER} | $(OBJ_DIR)
		$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR) :
		mkdir -p $@

clean:
		${RM} $(OBJ_DIR)

fclean:		clean
		${RM} ${NAME}

re:			fclean
		$(MAKE) all

.PHONY:		all clean fclean re