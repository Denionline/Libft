# **************************************************************************** #
#                                    Names                                     #
# **************************************************************************** #

NAME= libft.a

# **************************************************************************** #
#                                    Colors                                    #
# **************************************************************************** #

P				= \033[

C_STD			= $(P)0;39m


C_GRAY			= 30m
C_RED			= 31m
C_GREEN			= 32m
C_YELLOW		= 33m
C_BLUE			= 34m
C_MAGENTA		= 35m
C_CYAN			= 36m
C_WHITE			= 37m

C_LGRAY			= 90m
C_LRED			= 91m
C_LGREEN		= 92m
C_LYELLOW		= 93m
C_LBLUE			= 94m
C_LMAGENTA		= 95m
C_LCYAN			= 96m
C_LWHITE		= 97m

W				= 0;
N				= 1;
O				= 2;
I				= 3;
S				= 4;
F				= 5;
T				= 9;

# **************************************************************************** #
#                                     Paths                                    #
# **************************************************************************** #

SRC_PATH        = src
BUILD_PATH      = .build
INCLUDE_PATH	= include

FT_IS_PATH      = ft_is
FT_TO_PATH      = ft_to
FT_STR_PATH     = ft_str
FT_PUT_PATH     = ft_put
FT_MEM_PATH     = ft_mem
FT_LST_PATH     = ft_lst

FT_IS_FILES     += ft_isalnum
FT_IS_FILES     += ft_isalpha
FT_IS_FILES     += ft_isprint
FT_IS_FILES     += ft_isdigit
FT_IS_FILES     += ft_isascii

FT_TO_FILES     += ft_toupper
FT_TO_FILES     += ft_tolower
FT_TO_FILES     += ft_atoi
FT_TO_FILES     += ft_itoa

FT_STR_FILES        += ft_strncmp
FT_STR_FILES        += ft_strlen
FT_STR_FILES        += ft_strlcpy
FT_STR_FILES        += ft_strlcat
FT_STR_FILES        += ft_substr
FT_STR_FILES        += ft_strtrim
FT_STR_FILES        += ft_strchr
FT_STR_FILES        += ft_split
FT_STR_FILES        += ft_strrchr
FT_STR_FILES        += ft_strnstr
FT_STR_FILES        += ft_strmapi
FT_STR_FILES        += ft_strjoin
FT_STR_FILES        += ft_strdup
FT_STR_FILES        += ft_striteri

FT_PUT_FILES        += ft_putchar_fd
FT_PUT_FILES        += ft_putstr_fd
FT_PUT_FILES        += ft_putendl_fd
FT_PUT_FILES        += ft_putnbr_fd

FT_MEM_FILES        += ft_calloc
FT_MEM_FILES        += ft_bzero
FT_MEM_FILES        += ft_memcpy
FT_MEM_FILES        += ft_memcmp
FT_MEM_FILES        += ft_memmove
FT_MEM_FILES        += ft_memset
FT_MEM_FILES        += ft_memchr

FT_LST_FILES    += ft_lstnew
FT_LST_FILES    += ft_lstadd_front
FT_LST_FILES    += ft_lstsize
FT_LST_FILES    += ft_lstlast
FT_LST_FILES    += ft_lstadd_back
FT_LST_FILES    += ft_lstdelone
FT_LST_FILES    += ft_lstclear
FT_LST_FILES    += ft_lstiter
FT_LST_FILES    += ft_lstmap


SRC_FILES       += $(addprefix $(FT_IS_PATH)/, $(FT_IS_FILES) )
SRC_FILES       += $(addprefix $(FT_TO_PATH)/, $(FT_TO_FILES) )
SRC_FILES       += $(addprefix $(FT_STR_PATH)/, $(FT_STR_FILES) )
SRC_FILES       += $(addprefix $(FT_PUT_PATH)/, $(FT_PUT_FILES) )
SRC_FILES       += $(addprefix $(FT_MEM_PATH)/, $(FT_MEM_FILES) )
SRC_FILES       += $(addprefix $(FT_LST_PATH)/, $(FT_LST_FILES) )

SRCS := $(addprefix $(SRC_PATH)/, $(addsuffix .c,$(SRC_FILES)))
OBJS := $(addprefix $(BUILD_PATH)/, $(addsuffix .o,$(SRC_FILES)))


# **************************************************************************** #
#                                     Compiler                                 #
# **************************************************************************** #

cc			= cc
CFLAGS		= -Wall -Wextra -Werror -I$(INCLUDE_PATH)
MAKE		= make --no-print-directory

# **************************************************************************** #
#                                     Comands                                  #
# **************************************************************************** #

RM          = rm -rf
AR          = ar rcs

# **************************************************************************** #
#                                      Rules                                   #
# **************************************************************************** #

.PHONY: all clean fclean re

all: $(BUILD_PATH) $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@printf "\n$(P)$(W)$(C_YELLOW)Success to create:$(P)$(W)$(C_STD)\n\n"
	@printf "$(P)$(F)$(C_GREEN)\
					| |   (_) |    / _| |  \n\
					| |    _| |__ | |_| |_ \n\
					| |   | | '_ \|  _| __|\n\
					| |___| | |_) | | | |_ \n\
					\_____/_|_.__/|_|  \__|\n\
			\n$(C_STD)"

$(BUILD_PATH)/%.o: $(SRC_PATH)/%.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "\r$(P)$(W)$(C_GREEN)✔ Compiled => $(P)$(W)$(C_BLUE)$< → $@$(P)$(W)$(C_STD)\n"

$(BUILD_PATH):
	@printf "\n$(P)$(W)$(C_CYAN)Building library...$(P)$(W)$(C_STD)\n"
	@mkdir $(BUILD_PATH)
	@mkdir $(BUILD_PATH)/$(FT_IS_PATH)
	@mkdir $(BUILD_PATH)/$(FT_TO_PATH)
	@mkdir $(BUILD_PATH)/$(FT_STR_PATH)
	@mkdir $(BUILD_PATH)/$(FT_PUT_PATH)
	@mkdir $(BUILD_PATH)/$(FT_MEM_PATH)
	@mkdir $(BUILD_PATH)/$(FT_LST_PATH)

clean:
	@$(RM) $(BUILD_PATH)
	@printf "\n$(P)$(W)$(C_RED)Removed $(BUILD_PATH)$(P)$(W)$(C_STD)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(P)$(W)$(C_MAGENTA)Arquive $(NAME) removed!$(P)$(W)$(C_STD)\n"

re: fclean all