NAME	=	libft.a



SRC		=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
			ft_bzero.c ft_memcpy.c ft_toupper.c ft_memset.c ft_memmove.c ft_strchr.c ft_strlcat.c \
			ft_tolower.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strstr.c ft_atoi.c \
			ft_strlcpy.c ft_calloc.c

OBJS	=	${SRC:.c=.o}

CC		=	gcc

RM		=	rm -f

CFLAGS	=	-Wall -Werror -Wextra

all: ${NAME}

${NAME}: ${OBJS}
	ar -rc  ${NAME} ${OBJS}



clean:
	${RM}	${OBJS}

fclean: clean
	${RM}	${NAME}

re: fclean all
