# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmmethi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/05 11:17:55 by mmmethi           #+#    #+#              #
#    Updated: 2019/06/19 14:31:09 by mmmethi          ###   ########.fr        #
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
			ft_strnew.c \
			ft_strdel.c \
			ft_strclr.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strequ.c \
			ft_strnequ.c \
			ft_strsub.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_strsplit.c \
			ft_countwords.c \
			ft_itoa.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_putendl.c \
			ft_putnbr.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putchar_fd.c \
			ft_putnbr_fd.c \

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
			ft_strnew.o \
			ft_strdel.o \
			ft_strclr.o \
			ft_striter.o \
			ft_striteri.o \
			ft_strmap.o \
			ft_strmapi.o \
			ft_strequ.o \
			ft_strnequ.o \
			ft_strsub.o \
			ft_strjoin.o \
			ft_strtrim.o \
			ft_strsplit.o \
			ft_countwords.o \
			ft_itoa.o \
			ft_putchar.o \
			ft_putstr.o \
			ft_putendl.o \
			ft_putnbr.o \
			ft_putstr_fd.o \
			ft_putendl_fd.o \
			ft_putchar_fd.o \
			ft_putnbr_fd.o \

RM = rm -f

all: $(NAME)

$(NAME): $(OBJCTS)
		$(AR) -rcs $(NAME) $?

clean:
		$(RM) $(OBJCTS)

fclean: clean
		$(RM) $(NAME)

re: fclean all
