NAME = zombie
CC = c++ -std=c++98
CFLAGS =  -Wall -Wextra -Werror

SRC = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

all: $(NAME)

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp Zombie.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all