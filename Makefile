##
## EPITECH PROJECT, 2021
## my_defender
## File description:
## Makefile
##

SOURCES		=	src/utils/my_strcat.c 	      			\
				src/utils/my_stwa.c 	      			\
				src/utils/my_strlen.c 	      			\
				src/utils/my_itoa.c			  			\
				src/my_defender.c 						\
				src/display_general.c 	      			\
				src/music_gest.c              			\
				src/analyse_events.c 	      			\
				src/menu/menu.c 	 	      			\
				src/menu/events_menu.c 	      			\
				src/menu/init_settings.c      			\
				src/menu/settings.c		      			\
				src/menu/change_music.c 	  			\
				src/game/init_game_ui.c       			\
				src/game/init_mechs.c 	      			\
				src/game/find_pos_for_mechs.c 			\
				src/game/init_pause_menu.c    			\
				src/game/init_sprites.c       			\
				src/game/go_to_game.c	      			\
				src/game/display_game.c       			\
				src/game/destroy_game.c       			\
				src/game/put_towers.c 	      			\
				src/game/money_score.c 		  			\
				src/game/tower_infos.c 		  			\
				src/game/events/pause_menu_events.c		\
				src/game/events/game_ui_evs.c 			\
				src/game/events/game_event.c 			\
				src/game/put_tower_grid.c 	  			\
				src/game/game_over.c 					\
				src/game/init_enm.c 					\
				src/game/disp_enm.c 					\
				src/game/hitbox.c						\
				src/game/move_enm.c 					\

NAME		=	my_defender

OBJ 		=	$(SRC:.c=.o)

INCLUDE		= 	-I include/

SMFL_FLAGS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

CFLAGS		=	-Wextra -Wall -O2 $(INCLUDE) $(SMFL_FLAGS)

all: $(OBJ) clean
	gcc -g -o $(NAME) $(SOURCES) $(INCLUDE) $(SMFL_FLAGS)

clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f *.tmp

fclean: clean
	rm -f $(NAME)

re: fclean all