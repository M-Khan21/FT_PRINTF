# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makhan <makhan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/27 21:14:29 by makhan            #+#    #+#              #
#    Updated: 2023/06/06 22:13:56 by makhan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC		= CC
CFLAGS	= -Wall -Werror -Wextra

SRCS	=	ft_printf.c ft_pchar.c ft_phex.c ft_pint.c ft_ppercent.c ft_pptr.c ft_pstr.c ft_punsigned.c libft/ft_putchar_fd.c libft/ft_putnbr_fd.c libft/ft_putstr_fd.c libft/ft_strlen.c libft/ft_strchr.c
OBJS	= 	$(SRCS:.c=.o)

all		: 	$(NAME)

$(NAME)	: 	$(OBJS)
			@ar -r $(NAME) $(OBJS)

clean	:
			@rm -f $(OBJS)

fclean	:	clean
			@rm -f $(NAME)

re		: fclean all
