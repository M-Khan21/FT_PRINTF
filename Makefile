# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makhan <makhan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/27 21:14:29 by makhan            #+#    #+#              #
#    Updated: 2023/06/06 20:09:37 by makhan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFTNAME = libft.a

CC = CC
CFLAGS = -Wall -Werror -Wextra
LIBFTDIR = ./LIBFT

SRCS = ft_printf.c ft_pchar.c ft_phex.c ft_pint.c ft_ppercent.c ft_pptr.c ft_pstr.c

OBJS = $(SRCS: .c = .o)

all: $(NAME)

makelibft:
		@make -C $(LIBFTDIR)
		@cp $(LIBFTDIR)/$(LIBFTNAME) .
		@mv $(LIBFTNAME) $(NAME)

$(NAME): makelibft $(OBJS)
	@ar -r $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@cd $(LIBFTDIR) && make clean

fclean: clean
	@rm -f $(NAME)
	@cd $(LIBFTDIR) && make fclean

re: fclean all
