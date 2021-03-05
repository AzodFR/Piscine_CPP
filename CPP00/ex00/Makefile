NAME = megaphone

CC = clang++

FLAGS = -Wall -Wextra -Werror

FILES = megaphone.cpp

RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(FILES) -o $(NAME)

fclean:
	$(RM) $(NAME)

re: fclean all