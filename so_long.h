#ifndef SO_LONG_H
# define SO_LONG_H

#include <mlx.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct	s_param{
	int x;
	int y;
}				t_param;

typedef struct	s_info{
	void		*mlx;
	void		*win;
	char		*map_name;
	char		**map;
	char 		*buf;
	int			map_width;
	int			map_height;
	void		*img_tree;
	void		*img_tile;
	void		*img_exit;
	void		*img_coin;
	void		*player_u0;
	void		*player_l0;
	void		*player_d0;
	void		*player_r0;
	t_param		pos;
	t_param		exit_pos;
	int 		img_width;
	int			img_height;
	int			exit_cnt;
	int			player_cnt;
	int			collect_cnt;
	int			move_cnt;
	bool		playing;
}				t_info;

int ft_strcmp(char *arr1, char *arr2);
int ft_strlen(const char *s);
void ft_strcpy(char *dst, char *src);

//print
void print(t_info *info);


// error
void error_exit(char *error_command);

//argc argv
void check_parameter(int argc, char *name, t_info *info);

//init info
void init_info(t_info *info);

// file관련
int	file_handleing(t_info *info);

// map
void create_2D_map(t_info *info);
void insert_2D_map(t_info *info);

//map check
void map_check(t_info *info);
void is_around_wall(t_info *info);

//window
void init_window(t_info *info);
void put_tile(t_info *info);
void put_image(t_info *info);

int key_press(int keycode, t_info *info);
void move_top(t_info *info, int x, int y);
void move_down(t_info *info, int x, int y);
void move_left(t_info *info, int x, int y);
void move_right(t_info *info, int x, int y);

#define	BUFF_SIZE 1024
#define X_EVENT_KEY_PRESS	2
#define X_EVENT_KEY_RELEASE 3
#define X_EVENT_KEY_EXIT	17

#define KEY_ESC				53
#define KEY_W				13
#define	KEY_A				0
#define KEY_S				1
#define KEY_D				2
# define KEY_UP				126
# define KEY_LEFT			123
# define KEY_DOWN			125
# define KEY_RIGHT			124

# endif
