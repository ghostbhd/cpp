SRCS =	*.cpp

CPP = @c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = @rm -rf

AR = @ar -rc

NAME = scavtrap

sanitize = -fsanitize=address -static-libasan -g3

all : $(NAME)

$(NAME) : ${SRCS}
	${CPP} ${CFLAGS} $(SRCS) -o $(NAME)
	@echo "\n\x1b[32m \x1b[1m ✅\tMandatory Compele\n\t\x1b[0mPrograme -\x1b[33m ($(NAME))\n\x1b[0m"

clean :
	${RM} $(NAME)
	@echo "\n\x1b[31m \x1b[1m ✅\tDelete [$(NAME)] \x1b[32mSuccess\n\x1b[0m"

re : clean all
