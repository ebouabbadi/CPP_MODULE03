NAME = ClapTrap

SRC = main.cpp ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)

CPP = c++

RM = rm -f

CPPFLAGS = #-Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp	ClapTrap.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all