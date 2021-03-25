NAME = convert

CC = clang++

FLAGS = -Wall -Wextra -Werror

FILES = main.cpp

HPP = whatever.hpp

RM = rm -f


$(NAME): $(FILES:.cpp=.o) $(HPP)
	$(CC) $(FLAGS) $(FILES) -o $(NAME)

all: $(NAME)

fclean:
	$(RM) $(NAME)

re: fclean all