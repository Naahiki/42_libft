# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/04 11:50:59 by nrodrigu          #+#    #+#              #
#    Updated: 2022/09/23 20:48:42 by nrodrigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ********************************* VARIABLES ******************************** #

NAME = libft.a

.SILENT:

SRC =	ft_atoi.c 	ft_bzero.c \
		ft_calloc.c ft_isalnum.c \
		ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c \
		ft_itoa.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c \
		ft_putchar_fd.c ft_putstr_fd.c \
		ft_putnbr_fd.c ft_putendl_fd.c \
		ft_split.c ft_strchr.c \
		ft_strjoin.c ft_strdup.c \
		ft_striteri.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c \
		ft_strmapi.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c \
		ft_substr.c ft_strtrim.c \
		ft_tolower.c ft_toupper.c

OBJS = $(SRC:%.c=%.o)

BONUS =	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c \
		ft_lstclear_bonus.c ft_lstdelone_bonus.c \
		ft_lstlast_bonus.c ft_lstmap_bonus.c \
		ft_lstiter_bonus.c ft_lstnew_bonus.c \
		ft_lstsize_bonus.c

BONUS_OBJS = $(BONUS:%.c=%.o)

FLAGS = -Wall -Werror -Wextra

# ********************************* REGLAS INTERNAS MAKE ******************************** #
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	echo "Library compiled"

clean:
	rm -f $(OBJS) $(BONUS_OBJS)
	echo ".o files removed"

fclean: clean
	rm -f $(NAME)
	echo "Library removed"

re: fclean $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	echo "Library Compiled with bonus"

.PHONY: all clean fclean re bonus