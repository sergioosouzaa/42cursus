# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 09:08:03 by sdos-san          #+#    #+#              #
#    Updated: 2022/06/07 09:08:09 by sdos-san         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_isalpha \
		ft_isdigit \
		ft_tolower \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_strlen \
		ft_strncmp \
		ft_memset \
		ft_bzero  \
		ft_memcpy \
		ft_memmove \
		ft_strnstr \
		ft_strlcpy \
		ft_strlcat \
		ft_atoi \
		ft_strchr \
		ft_strrchr \
		ft_memchr \
		ft_memcmp \
		ft_memset \

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: clean all
