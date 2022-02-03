NAME	= so_long
MLXDIR	= ./minilibx_opengl_20191021
MLXFLAG = -lmlx -framework OpenGL -framework AppKit
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

SRC		= main.c \
		  ft_error.c \
		  ft_parameter.c \
		  ft_init_info.c \
		  ft_2d_map.c \
		  ft_strcmp.c \
		  ft_strcpy.c \
		  ft_strlen.ci \
		  ft_file_handle.c \
		  ft_map_check.c \
		  ft_wall_check.c \
		  ft_window.c \
		  ft_keyevent.c \
		  ft_move.c

OBJS	= $(SRC: .c = .o)


$(OBJS) :
	gcc -c $(SRC)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) -L $(MLXDIR) $(MLXFLAG) $(OBJS)

.PHONY : all
all	:	$(NAME)

.PHONY : clean
clean :
	rm -f $(OBJS)

.PHONY : fclean
	make clean
	rm -f $(NAME)

.PHONY : re
re : clean all
