##
## Makefile for libvector in /home/moutou_m/libvector/
##
## Made by Maxence Moutoussamy
## Login   <moutou_m@epitech.eu>
##
## Started on  Sat Nov  4 10:27:46 2017 Maxence Moutoussamy
## Last update Mon Nov 13 19:38:53 2017 moutoum
##

SRC	= 	$(shell find ../src -name '*.c')
SRC_UNIT=	$(shell find . -name 'test_*.c')

NAME	= 	units

CC	= 	gcc

CFLAGS	= 	-W \
		-Wall \
		-Wextra \
		-Werror \
		-I../include/ \
		--coverage \
		-g

LDFLAGS	=	-lcriterion \
		-lgcov

RM	= 	rm -f

OBJ	= 	$(SRC:.c=.o) $(SRC_UNIT:.c=.o)

ECHO 	= 	/bin/echo

all: $(NAME)

$(NAME):	$(OBJ)
	@gcc -o $(NAME) $(OBJ) $(LDFLAGS)
	@echo

clean:
	@$(RM) $(OBJ)
	@$(RM) *~

fclean: clean
	@$(RM) ../$(NAME)
	@$(RM) $(NAME)

re: fclean all

.PHONY: all $(NAME) clean fclean re

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS) && $(ECHO) -e "\e[32m--[OK]--\e[0m $@" || $(ECHO) -e "\e[31m--[XX]--\e[0m $@"
