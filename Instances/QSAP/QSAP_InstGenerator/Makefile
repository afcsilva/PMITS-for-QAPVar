EXECUTABLE = main
COMPILATEUR = g++
COMPILE = $(COMPILATEUR) $(INCLUDE) -c 
OPTIONS = -m64 -O4 -fPIC -DNDEBUG -DIL_STD -std=c++0x 
LIBS    = -L -lconcert -m64 -lm -pthread

OBJS    = main.o bibrand2.o

$(EXECUTABLE): $(OBJS)
	$(COMPILATEUR) -o $(EXECUTABLE) $(OBJS) $(LIBS) $(OPTIONS)

main.o: main.cpp
	$(COMPILE) $(OPTIONS) main.cpp

bibrand2.o: bibrand2.cpp bibrand2.h
	$(COMPILE) -c $(OPTIONS) bibrand2.cpp

all: main

clean:
	rm -fr main *.o

