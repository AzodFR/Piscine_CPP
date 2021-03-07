NAME = replace

TEST_FILE = test_file

CC = clang++

FLAGS = -Wall -Wextra -Werror

FILES = main.cpp

RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(FILES) -o $(NAME)

g:
	@echo "to_replace to_replace to_replace not_to_replace not what ? to_replace not_to_replace make a choice !" > $(TEST_FILE)
	@echo "not_to_replace not_to_replace to_replace to_replace bro are you drunk ?" >> $(TEST_FILE)

g2:
	@echo "0-0-0-0-0-0-0-0-0-0-0-0" > $(TEST_FILE)

test: g $(NAME)
	@printf "\e[91mBEFORE: \n\e[0m"
	@cat $(TEST_FILE)
	@printf "\n\e[93m>> "
	./$(NAME) $(TEST_FILE) to_replace "fubar"
	@printf "\n\e[92mAFTER: \n\e[0m"
	@cat $(TEST_FILE)

test2: g2 $(NAME)
	@printf "\e[91mBEFORE: \n\e[0m"
	@cat $(TEST_FILE)
	@printf "\n\e[93m>> "
	./$(NAME) $(TEST_FILE) - +
	@printf "\n\e[92mAFTER: \n\e[0m"
	@cat $(TEST_FILE)
	@printf "\n\e[93m>> "
	./$(NAME) $(TEST_FILE) 0 -
	@printf "\n\e[92mAFTER 2: \n\e[0m"
	@cat $(TEST_FILE)
	@printf "\n\e[93m>> "
	./$(NAME) $(TEST_FILE) + 0
	@printf "\n\e[92mAFTER 3: \n\e[0m"
	@cat $(TEST_FILE)

fclean:
	$(RM) $(NAME)
	$(RM) $(TEST_FILE)

re: fclean all g test $(NAME)