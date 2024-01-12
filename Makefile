SRCS			=	ft_printf.c ft_print_ptr.c

OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
FLAGS			= -Wall -Wextra -Werror -I ./includes

LIBFT_SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_striteri.c\
					ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
					ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c
LIBFT_OBJS			= $(LIBFT_SRCS:.c=.o)

LIBFT			= libft.a

NAME			= libftprintf.a

%.o: %.c
				$(CC) $(FLAGS) -c $< -o $@

all:			$(NAME)

$(LIBFT):
				make -C libft
$(NAME):		$(LIBFT) $(OBJS)
				ar rcs $(NAME) $(OBJS) $(addprefix libft/, $(LIBFT_OBJS))

clean:
				make -C libft clean
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
