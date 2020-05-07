# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/21 16:28:47 by joguntij          #+#    #+#              #
#    Updated: 2020/01/26 04:05:02 by joguntij         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
		ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c	ft_strcpy.c \
		ft_putchar.c ft_putstr.c ft_memalloc.c ft_isspace.c ft_isupper.c ft_islower.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putendl.c ft_putnbr_fd.c ft_putnbr.c ft_strupcase.c ft_strstr.c ft_strnew.c ft_strndup.c ft_strcmp.c ft_strlowcase.c ft_isxdigit.c \
		ft_isblank.c ft_iscntrl.c ft_isgraph.c ft_memdel.c ft_str_is_alpha.c ft_str_is_lowercase.c ft_str_is_numeric.c ft_str_is_printable.c \
		ft_str_is_uppercase.c ft_strnlen.c
	
FILES_BONUS =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
				ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJECTS =	$(FILES:.c=.o)

OBJECTS_BONUS =	$(FILES_BONUS:.c=.o)

HEADERS = libft.h 

FLAGS = -Wall -Werror -Wextra

CC = gcc -c $(FLAGS)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc libft.a $(OBJECTS)

clean:
	/bin/rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	/bin/rm -f  $(NAME)

re: fclean all

bonus: $(OBJECTS_BONUS) $(OBJECTS)
	ar rc libft.a $(OBJECTS) $(OBJECTS_BONUS)

%.o: %.c
	$(CC) $< -I $(HEADERS) -o $@ 