NAME = 118218

CC = clang++

FLAGS = -Wall -Wextra -Werror

FILES = commands.cpp main.cpp utils.cpp Contact.cpp

RM = rm -f

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(FLAGS) $(FILES) -o $(NAME)

fclean:
	$(RM) $(NAME)

re: fclean all