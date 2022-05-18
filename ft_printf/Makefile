NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c\
		ft_printf_util.c\
		ft_criteria.c\
		ft_criteria_two.c
OBJS = $(SRCS:%.c=%.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: fclean all clean re bonus

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all