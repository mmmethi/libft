# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmmethi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/05 11:17:55 by mmmethi           #+#    #+#              #
#    Updated: 2019/06/10 14:44:41 by mmmethi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS += -Wall -Wextra -Werror -Iinclide/

SRCS = ft_memset.c \
	   		ft_bzero.c \
			ft_memchr.c \
			ft_memccpy.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strdup.c \
			ft_strcpy.c \
			ft_strcat.c \
			ft_strncat.c \
			ft_strncpy.c \
			ft_strrchr.c \
			ft_strchr.c \
			ft_strstr.c \
			ft_strnstr.c \
			ft_strcmp.c \
			ft_strncmp.c \
			ft_isspace.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_atoi.c \
			ft_strlen.c \
			ft_strlcat.c \
			ft_memalloc.c \
			ft_memdel.c \

OBJCTS = ft_memset.o \
	   		ft_bzero.o \
			ft_memchr.o \
			ft_memccpy.o \
			ft_memcmp.o \
			ft_memcpy.o \
			ft_memmove.o \
			ft_strdup.o \
			ft_strcpy.o \
			ft_strcat.o \
			ft_strncat.o \
			ft_strncpy.o \
			ft_strrchr.o \
			ft_strchr.o \
			ft_strstr.o \
			ft_strnstr.o \
			ft_strcmp.o \
			ft_strncmp.o \
			ft_isspace.o \
			ft_isalpha.o \
			ft_isdigit.o\
			ft_isalnum.o \
			ft_isascii.o \
			ft_isprint.o \
			ft_tolower.o \
			ft_toupper.o \
			ft_atoi.o \
			ft_strlen.o \
			ft_strlcat.o \
			ft_memalloc.o \
			ft_memdel.o \

RM = rm -f

all: $(NAME)

$(NAME): $(OBJCTS)
		$(AR) -rcs $(NAME) $?

clean:
		$(RM) $(OBJCTS)

fclean: clean
		$(RM) $(NAME)

re: fclean all
