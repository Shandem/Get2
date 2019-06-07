# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joshguti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/15 17:52:54 by joshguti          #+#    #+#              #
#    Updated: 2019/03/15 18:09:08 by joshguti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

SRCS=ft_lstiter.c ft_putstr_fd.c ft_strncpy.c ft_lstmap.c \
	ft_atoi.c ft_lstnew.c  ft_strchr.c ft_strnew.c \
	ft_bzero.c ft_memalloc.c ft_strclr.c ft_strnstr.c \
	ft_fill.c ft_memccpy.c ft_strcmp.c ft_strrchr.c \
	ft_isalnum.c ft_memchr.c ft_strcpy.c ft_strsplit.c \
	ft_isalpha.c ft_memcmp.c ft_strdel.c ft_strstr.c \
	ft_isascii.c ft_memcpy.c ft_strdup.c ft_strsub.c \
	ft_isdigit.c ft_memdel.c  ft_strequ.c ft_strtrim.c \
	ft_islower.c ft_memmove.c ft_striter.c ft_tolower.c \
	ft_isprint.c ft_memset.c ft_striteri.c ft_toupper.c \
	ft_isspace.c ft_putchar.c ft_strjoin.c ft_whitespace.c \
	ft_isupper.c ft_putchar_fd.c ft_strlcat.c ft_wordcount.c \
	ft_itoa.c ft_putendl.c    ft_strlen.c ft_words.c \
	ft_letters.c ft_putendl_fd.c ft_strmap.c ft_strcat.c \
	ft_lstadd.c ft_putnbr.c  ft_strmapi.c ft_strnequ.c \
	ft_lstdel.c ft_putnbr_fd.c ft_strncat.c  ft_strndup.c\
	ft_lstdelone.c ft_putstr.c ft_strncmp.c \

OBJECTS=ft_lstiter.o ft_putstr_fd.o ft_strncpy.o ft_lstmap.o \
	ft_atoi.o ft_lstnew.o  ft_strchr.o ft_strnew.o \
	ft_bzero.o ft_memalloc.o ft_strclr.o ft_strnstr.o \
	ft_fill.o ft_memccpy.o ft_strcmp.o ft_strrchr.o \
	ft_isalnum.o ft_memchr.o ft_strcpy.o ft_strsplit.o \
	ft_isalpha.o ft_memcmp.o ft_strdel.o ft_strstr.o \
	ft_isascii.o ft_memcpy.o ft_strdup.o ft_strsub.o \
	ft_isdigit.o ft_memdel.o  ft_strequ.o ft_strtrim.o \
	ft_islower.o ft_memmove.o ft_striter.o ft_tolower.o \
	ft_isprint.o ft_memset.o ft_striteri.o ft_toupper.o \
	ft_isspace.o ft_putchar.o ft_strjoin.o ft_whitespace.o \
	ft_isupper.o ft_putchar_fd.o ft_strlcat.o ft_wordcount.o \
	ft_itoa.o ft_putendl.o    ft_strlen.o ft_words.o \
	ft_letters.o ft_putendl_fd.o ft_strmap.o ft_strcat.o \
	ft_lstadd.o ft_putnbr.o ft_strmapi.o ft_strnequ.o \
	ft_lstdel.o ft_putnbr_fd.o ft_strncat.o ft_strndup.o\
	ft_lstdelone.o ft_putstr.o ft_strncmp.o \

INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	@echo Starting!
	@gcc -Wall -Werror -Wextra -I$(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@echo Finished!

clean:
	@/bin/rm -f $(OBJECTS)
	@echo Objects are removed!

fclean: clean
	@/bin/rm -f $(NAME)
	@echo All gcc files removed!

re: fclean all
