CC = gcc
FLAGS= -Wall 
LIBS= -lm #-lSDL -lSDL_ttf
SRC_PATH = ./
DESTDIR = ./output/
LIBPATH = ./libs/

#SDL_CFLAGS = $(shell sdl-config --cflags)
#SDL_LDFLAGS = $(shell sdl-config --libs)


all: create 

%.o: %.c
	$(CC) $(FLAGS) -c $^ -o $@


create: $(SRC_PATH)main.o $(LIBPATH)functions.o 
	$(CC) $(FLAGS) -o $(DESTDIR)$@ $^ $(LIBS) 
	rm $(SRC_PATH)*.o
	rm $(LIBPATH)*.o

	


