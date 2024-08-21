NAME = push_swap

SRCDIR = src
UTILSDIR = utils
HEADERDIR = header
 
SRC = ${SRCDIR}/main.c\
	${SRCDIR}/assign_positions.c\
 	${SRCDIR}/check_arguments.c\
 	${SRCDIR}/cost.c\
 	${SRCDIR}/find_target.c\
	${SRCDIR}/index.c\
 	${SRCDIR}/init_stack.c\
 	${SRCDIR}/instruction_3.c\
 	${SRCDIR}/instructions_2.c\
	${SRCDIR}/instructions.c\
 	${SRCDIR}/midpoint.c\
 	${SRCDIR}/rearrange_both.c\
 	${SRCDIR}/rearrange.c\
 	${SRCDIR}/send_to_a.c\
	${SRCDIR}/sort_large.c\
	${UTILSDIR}/addutils.c\
 	${UTILSDIR}/chedup.c\
 	${UTILSDIR}/error_check.c\
 	${UTILSDIR}/free.c\
 	${UTILSDIR}/ft_atoi.c\
 	${UTILSDIR}/ft_isdigit.c\
 	${UTILSDIR}/ft_split.c\
	${UTILSDIR}/lists.c\
 	${UTILSDIR}/utils.c

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I$(HEADERDIR)

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
