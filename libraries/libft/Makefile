# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jovicto2 <jovicto2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/07 19:06:56 by jovicto2          #+#    #+#              #
#    Updated: 2023/11/06 17:24:21 by jovicto2         ###   ########.org.br    #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

PATH_SRC	= sources/

PATH_OBJ	= objects/

SRC			= $(addprefix $(PATH_SRC), ft_isalpha.c ft_isdigit.c ft_isalnum.c \
				ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
				ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
				ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
				ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
				ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
				ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
				ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c \
				ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
				ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_get_next_line.c \
				ft_lputstr_fd.c ft_lputaddress_fd.c ft_lputhexa_fd.c \
				ft_lputoctal_fd.c ft_lputdouble_fd.c ft_lputbin_fd.c \
				ft_lputnbr_fd.c ft_itoa_base.c ft_ptoa.c ft_ctoa.c \
				ft_itoa_hex.c ft_check_string.c ft_printf.c ft_manage_params.c \
				ft_write_params.c ft_apply_flags.c ft_for_each.c \
				ft_arr_for_each.c ft_arr_split.c ft_arr_len.c ft_ternary.c \
				ft_handle_error.c ft_putstr_color_fd.c ft_atol.c ft_operate.c \
				ft_sort_int_arr.c ft_swap.c ft_dlstnew.c ft_dlstadd_f.c \
				ft_dlstadd_b.c ft_dlstclear.c ft_dlstdelone.c ft_dlstlast.c \
				ft_dlstiter.c ft_strdjoin.c ft_strfjoin.c ft_dprintf.c \
				ft_dprintf_utils.c ft_dprintf_utils2.c)

HEADER = includes/

AR = ar -rcs

FLAGS = -Wall -Wextra -Wunreachable-code -Ofast -g3 -O3

OBJS = $(patsubst $(PATH_SRC)%.c, $(PATH_OBJ)%.o, $(SRC))

# Colors
RED = \033[0;31m
GREEN = \033[0;32m
RESET = \033[0m

all: $(NAME)

$(PATH_OBJ)%.o: $(PATH_SRC)%.c
	@mkdir -p $(PATH_OBJ)
	@$(CC) $(FLAGS) -c $< -o $@ -I $(HEADER)

$(NAME): $(OBJS) $(HEADER)
	@if [ ! -f $(NAME) ]; then \
		$(AR) $(NAME) $(OBJS); \
		if [ -f $(NAME) ]; then \
    		printf "$(GREEN)Compiled $(NAME) successfully!$(RESET)\n"; \
    	else \
    		printf "$(RED)$(NAME) is not compiled yet!$(RESET)\n"; \
		fi \
    else \
    	printf "$(RED)$(NAME) is already compiled!$(RESET)\n"; \
    fi

clean:
	@if [ -d $(PATH_OBJ) ]; then \
		$(RM) -rf $(PATH_OBJ); \
		printf "$(GREEN)Cleaned objects from $(NAME) successfully!$(RESET)\n"; \
	else \
		printf "$(RED)Objects from $(NAME) are already cleaned!$(RESET)\n"; \
	fi

fclean: clean
	@if [ -f $(NAME) ]; then \
		$(RM) $(NAME); \
		printf "$(GREEN)Removed $(NAME) successfully!$(RESET)\n"; \
	else \
		printf "$(RED)$(NAME) is already cleaned!$(RESET)\n"; \
	fi

re: fclean all

.PHONY: all clean fclean re
