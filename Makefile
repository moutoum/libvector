##
## Makefile for libvector in /home/moutou_m/libvector/
##
## Made by Maxence Moutoussamy
## Login   <moutou_m@epitech.eu>
##
## Started on  Sat Nov  4 10:27:46 2017 Maxence Moutoussamy
## Last update Sun Nov 12 22:17:10 2017 Maxence Moutoussamy
##

SRC	= 	$(shell find ./src -name '*.c')

NAME	= 	libvector.a

CC	= 	gcc

CFLAGS	= 	-W \
		-Wall \
		-Wextra \
		-Werror \
		-I./include/ \
		-g

RM	= 	rm -f

OBJ	= 	$(SRC:.c=.o)

ECHO 	= 	/bin/echo

all: $(NAME)

$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
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
