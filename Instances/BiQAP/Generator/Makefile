EXECUTABLE = newmain
COMPILATEUR = g++
COMPILE = $(COMPILATEUR) $(INCLUDE) -c 
OPTIONS     = -m64 -O4 -fPIC -DNDEBUG -DIL_STD -std=c++0x 
LIBS    = -L -lconcert -m64 -lm -pthread

OBJS    = newmain.o bibrand2.o

$(EXECUTABLE): $(OBJS)
	$(COMPILATEUR) -o $(EXECUTABLE) $(OBJS) $(LIBS) $(OPTIONS)

main.o: newmain.cpp
	$(COMPILE) $(OPTIONS) newmain.cpp

bibrand2.o: bibrand2.cpp bibrand2.h
	$(COMPILE) -c $(OPTIONS) bibrand2.cpp

all: newmain

clean:
	rm -fr newmain *.o

