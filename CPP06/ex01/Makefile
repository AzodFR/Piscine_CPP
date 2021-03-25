NAME = serialize

CC = clang++

FLAGS = -Wall -Wextra -Werror

FILES = main.cpp

RM = rm -f

all: $(NAME)

$(NAME): $(FILES:.cpp=.o)
	$(CC) $(FLAGS) $(FILES) -o $(NAME)

fclean:
	$(RM) $(NAME)

re: fclean all