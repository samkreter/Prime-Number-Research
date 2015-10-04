CCOPTION = Wall std=gnu++11 D__USE_MINGW_ANSI_STDIO=1
FLAGS = $(addprefix -,$(CCOPTION))
CC = g++
OBJ = main.o Primework.o
SRC_DIR = /Users/samkreter/work/Research/Prime-Number-Research

output.out: $(OBJ)
	 $(CC) $(FLAGS) $(OBJ) -o output.out

main.o: main.cpp
	 $(CC) $(FLAGS) -c main.cpp -o main.o

Primework.o: src/Primework.cpp
	 $(CC) $(FLAGS) -c src/Primework.cpp -o Primework.o


clean:
	rm *.o
	rm *.out
