CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
SRCS		= $(wildcard ./src/*.c)
OBJS		= $(SRCS:.c=.o)
TARGET		= libft.a
INC_DIR		= includes

.PHONY: clean fclean re all

all : $(TARGET)

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INC_DIR)

$(TARGET) : $(OBJS)
	ar crv $@ $(OBJS)

clean :
	rm -f $(OBJS)

fclean :
	make clean
	rm -f $(TARGET)

re :
	make fclean
	make all
