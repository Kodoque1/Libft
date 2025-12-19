NAME := libft.a
SRC :=  $(wildcard ft_*.c)
OBJ  := $(SRC:.c=.o)

RM := rm -f
CC := cc
AR = ar rcs
CFLAGS := -Werror -Wextra -Wall
CFLAGS += -Iincludes

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

# === CLEANING UP ===
clean:
	$(RM) $(OBJ) $(OBJ:.o=.d)

fclean: clean
	$(RM) $(NAME)

re:	fclean all


