LIBS=-lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

all: main

%.o: %.cpp
	g++ -c $< -o $@

main: main.o
	g++ -o main main.o $(LIBS)

clean:
	$(RM) main *.o
