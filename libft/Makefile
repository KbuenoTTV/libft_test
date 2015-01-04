#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 16:20:35 by jchichep          #+#    #+#              #
#    Updated: 2014/11/08 12:15:16 by jchichep         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= libft.a

SRC			= ft_putchar.c \
			  ft_putstr.c \
			  ft_putnbr.c \
			  ft_putendl.c \
			  ft_putchar_fd.c \
			  ft_putstr_fd.c \
			  ft_putnbr_fd.c \
			  ft_putendl_fd.c \
			  ft_isalpha.c \
			  ft_isdigit.c \
			  ft_isalnum.c \
			  ft_isascii.c \
			  ft_isspace.c \
			  ft_isupper.c \
			  ft_islower.c \
			  ft_isprint.c \
			  ft_toupper.c \
			  ft_tolower.c \
			  ft_memset.c \
			  ft_bzero.c \
			  ft_memdup.c \
			  ft_memcpy.c \
			  ft_memccpy.c \
			  ft_memmove.c \
			  ft_memchr.c \
			  ft_memcmp.c \
			  ft_strlen.c \
			  ft_strdup.c \
			  ft_strcdup.c \
			  ft_strndup.c \
			  ft_strcpy.c \
			  ft_strncpy.c \
			  ft_strcat.c \
			  ft_strncat.c \
			  ft_strlcat.c \
			  ft_strchr.c \
			  ft_strrchr.c \
			  ft_strcmp.c \
			  ft_strncmp.c \
			  ft_atoi.c \
			  ft_strstr.c \
			  ft_strnstr.c \
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
			  ft_strjoin.c \
			  ft_strsub.c \
			  ft_strtrim.c \
			  ft_strsplit.c \
			  ft_freestrtab.c \
			  ft_itoa.c \
			  ft_lstnew.c \
			  ft_lstdelone.c \
			  ft_lstdel.c \
			  ft_lstadd.c \
			  ft_lstmap.c

SRCDIR		= $(PWD)

OBJ			= $(addprefix $(OBJDIR)/, $(addsuffix .o, $(NOM)))

NOM			= $(basename $(notdir $(SRC)))

OBJDIR		= $(PWD)/obj

CC			= /usr/bin/gcc

CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f

ECHO		= echo

all			: $(NAME)

mkdir		:
	@test -d $(OBJDIR) || mkdir $(OBJDIR)

$(NAME)		: mkdir $(OBJ)
	@$(ECHO) "\033[0;32m> Compiled\033[0m"
	@ar rc $(NAME) $(OBJ)
	@$(ECHO) "\033[0;31m> Lib created\033[0m"
	@ranlib $(NAME)
	@$(ECHO) "\033[0;33m> Lib index added\033[0m"

$(OBJDIR)/%.o		: $(SRCDIR)/%.c
	@$(CC) $(CFLAGS) -c -o $@ $< \
	&& $(ECHO) "\033[1;30m[CC] : Compiled $(notdir $<) \
	[\033[0;32mOk\033[1;30m]\033[0m" \
	|| $(ECHO) "\033[1;30m[CC] : Compiled $(notdir $<) \
	[\033[0;7;31mError\033[0;1;30m]\033[0m"

clean		:
	@$(RM) $(OBJ)
	@$(RM) -r $(OBJDIR)
	@$(ECHO) "\033[0;34m> Directory cleaned\033[0m"

fclean		: clean
	@$(RM) $(NAME)
	@$(ECHO) "\033[0;35m> Library removed\033[0m"

re		: fclean all

bin		: all clean

.PHONY : all clean fclean re bin
