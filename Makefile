NAME = pushswap.a

# Compiler
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directories
LIBFT_DIR = 42-Libft
PRINTF_DIR = 42-ft_printf
BIDIRECT_DIR = bidirect-int-linklist
DEQUE_DIR = deque
PUSH_SWAP_DIR = push_swap

# Libraries
LIBFT = $(LIBFT_DIR)/libft.a
PRINTF = $(PRINTF_DIR)/libftprintf.a
LIBS = $(LIBFT) $(PRINTF)

# Source files and objects
BIDIRECT = $(BIDIRECT_DIR)/src/*.c
DEQUE = $(DEQUE_DIR)/src/*.c
PUSH_SWAP_ALGO = $(PUSH_SWAP_DIR)/algorithm_src/*.c
PUSH_SWAP_OP = $(PUSH_SWAP_DIR)/operation_src/*.c
PUSH_SWAP_OTHER = $(PUSH_SWAP_DIR)/others_src/*.c

SRCS = main.c $(BIDIRECT) $(DEQUE) $(PUSH_SWAP_ALGO) $(PUSH_SWAP_OP) $(PUSH_SWAP_OTHER)
OBJS = $(SRCS:.c=.o)

# Include directories for header files
INCLUDES = -I$(LIBFT_DIR) -I$(PRINTF_DIR)/include -I$(BIDIRECT_DIR)/include -I$(DEQUE_DIR)/include -I$(PUSH_SWAP_DIR)/include

all: $(LIBS) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(PRINTF):
	$(MAKE) -C $(PRINTF_DIR)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBS) $(INCLUDES) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(PRINTF_DIR) clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(PRINTF_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
