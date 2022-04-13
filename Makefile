# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvelazq <alvelazq@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/23 15:25:12 by alvelazq          #+#    #+#              #
#    Updated: 2022/04/11 13:15:26 by alvelazq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIB = ar -rcs

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

BONUSSRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \


OBJ = $(SRC:.c=.o)
BONUSOBJ = $(BONUSSRC:.c=.o)

RM = rm -f

$(NAME) : $(OBJ)
		$(LIB) $(NAME) $(OBJ)

B = .

bonus: $(B)

$(B) : $(OBJ) $(BONUSOBJ)
	$(LIB) $(NAME) $(OBJ) $(BONUSOBJ)

all: $(NAME) 

.c.o:
	gcc -Wall -Werror -Wextra -c $< -o $(<:.c=.o)

clean: 
	$(RM) $(OBJ) $(BONUSOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re bonus