# **************************************************************************** #
#                                    Config                                    #
# **************************************************************************** #

MAKE		= make
SHELL	= bash

# **************************************************************************** #
#                                    Names                                     #
# **************************************************************************** #

NAME		= libft.a

# **************************************************************************** #
#                                     Paths                                    #
# **************************************************************************** #

SRC_PATH	= .
INC_PATH	= .
BUILD_PATH	= .build

FILES		= ft_isalnum.c
FILES		+= ft_isalpha.c
FILES		+= ft_isprint.c
FILES		+= ft_isdigit.c
FILES		+= ft_isascii.c
FILES		+= ft_toupper.c
FILES		+= ft_tolower.c
FILES		+= ft_atoi.c
FILES		+= ft_strncmp.c
FILES		+= ft_memcmp.c
FILES		+= ft_strlen.c
FILES		+= ft_strlcpy.c
FILES		+= ft_strlcat.c
FILES		+= ft_strlcpy.c
FILES		+= ft_substr.c
FILES		+= ft_strtrim.c
FILES		+= ft_strchr.c
FILES		+= ft_strnstr.c
FILES		+= ft_strmapi.c
FILES		+= ft_strjoin.c
FILES		+= ft_strdup.c
FILES		+= ft_strnstr.c
FILES		+= ft_itoa.c
FILES		+= ft_striteri.c
FILES		+= ft_memcpy.c
FILES		+= ft_memmove.c
FILES		+= ft_calloc.c
FILES		+= ft_memcpy.c
FILES		+= ft_bzero.c
FILES		+= ft_putchar_fd.c
FILES		+= ft_putstr_fd.c
FILES		+= ft_putendl_fd.c
FILES		+= ft_putnbr_fd.c
FILES		+= ft_memset.c

SRC			= $(addprefix $(SRC_PATH)/, $(FILES))
OBJS		= $(SRC: $(SRC_PATH)/.c=$(BUILD_PATH)/%.o)

# **************************************************************************** #
#                                     Compiler                                 #
# **************************************************************************** #

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
INC			= -I $(INC_PATH)

# **************************************************************************** #
#                                     Comands                                  #
# **************************************************************************** #

RM			= rm -rf
AR			= ar rcs
MKDIR		= mkdir

# **************************************************************************** #
#                                      Rules                                   #
# **************************************************************************** #

all: $(BUILD_PATH) $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(BUILD_PATH):
	$(MKDIR) $(BUILD_PATH)

$(BUILD_PATH)/%.o: $(SRC_PATH)/%.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	$(RM) $(BUILD_PATH)

fclean:
	$(RM) ${NAME}

re: clean all

.PHONY: all clean fclean re