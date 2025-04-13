# **************************************************************************** #
#                                    Names                                     #
# **************************************************************************** #

NAME		= libft.a

# **************************************************************************** #
#                                     Paths                                    #
# **************************************************************************** #

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
FILES		+= ft_split.c
FILES		+= ft_strrchr.c
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
FILES		+= ft_memchr.c

OBJS		= $(FILES:%.c=%.o)

BONUS_FILES	= ft_lstnew.c
BONUS_FILES	+= ft_lstadd_front.c
BONUS_FILES	+= ft_lstsize.c
BONUS_FILES	+= ft_lstlast.c
BONUS_FILES	+= ft_lstadd_back.c
BONUS_FILES	+= ft_lstdelone.c
BONUS_FILES	+= ft_lstclear.c
BONUS_FILES	+= ft_lstiter.c
BONUS_FILES	+= ft_lstmap.c

BONUS_OBJS	= $(BONUS_FILES:%.c=%.o)


# **************************************************************************** #
#                                     Compiler                                 #
# **************************************************************************** #

CC			= cc
CFLAGS		= -Wall -Wextra -Werror

# **************************************************************************** #
#                                     Comands                                  #
# **************************************************************************** #

RM			= rm -rf
AR			= ar rcs

# **************************************************************************** #
#                                      Rules                                   #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Creating arquive $(NAME)"
	@$(CC) $(CFLAGS) -c $(FILES)
	@$(AR) $(NAME) $(OBJS)

%.o:%.c
	@echo "make: Compiling $(<)..."
	@$(CC) $(CFLAGS) -c $< -o $@

bonus: $(NAME)
	@echo "bonus: Making bonus..."
	@$(CC) $(CFLAGS) -c $(BONUS_FILES)
	@$(AR) $(NAME) $(BONUS_OBJS) $(OBJS)

clean:
	@echo "clean: Removing objects..."
	@$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	@echo "fclean: Removing $(NAME)..."
	@$(RM) ${NAME}

re: fclean all
