COMP=gcc

SRC=main.c src/window/window.c render/render.c	src/player/player.c

FLAG=-lraylib -lGL -lm -lpthread -ldl -lrt -lX11

all:
	$(COMP) $(SRC) -o app $(FLAG)