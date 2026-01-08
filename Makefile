NAME := libft.a
LIST_SRC := ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
FILE_SRC := ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c
MEM_SRC := ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c
STRING_SRC := ft_strmapi.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c
UTILS_SRC := ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_tolower.c ft_toupper.c ft_uitoa.c

LIST_DIR := linked_list/
FILE_DIR := file/
MEM_DIR := mem/
STRING_DIR := string/
UTILS_DIR := utils/

LIST  := $(addprefix $(LIST_DIR), $(LIST_SRC))
FILE  := $(addprefix $(FILE_DIR), $(FILE_SRC))
MEM  := $(addprefix $(MEM_DIR), $(MEM_SRC))
STRING  := $(addprefix $(STRING_DIR), $(STRING_SRC))
UTILS  := $(addprefix $(UTILS_DIR), $(UTILS_SRC))

SRC := $(LIST) $(FILE) $(MEM) $(STRING) $(UTILS)
OBJ = $(SRC:.c=.o)

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


