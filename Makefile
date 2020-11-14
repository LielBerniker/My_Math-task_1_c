CC=gcc
AR=ar
OBJECT_POWER=power.o
OBJECT_BASIC=basicMath.o
OBJECT_MAIN=main.o
FLAGS= -Wall -g
all: libmyMath.so libmyMath.a mains maind
mains: $(OBJECT_MAIN) libmyMath.a
	$(CC) $(FLAGS) -o mains $(OBJECT_MAIN) libmyMath.a
maind: $(OBJECT_MAIN)
	$(CC) $(FLAGS) -o maind $(OBJECT_MAIN) ./libmyMath.so
libmyMath.a: $(OBJECT_BASIC) $(OBJECT_POWER)
	$(AR) -rcs libmyMath.a $(OBJECT_BASIC) $(OBJECT_POWER)
libmyMath.so: $(OBJECT_BASIC) $(OBJECT_POWER)
	$(CC) -shared -o libmyMath.so $(OBJECT_BASIC) $(OBJECT_POWER)
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all

clean:
	rm libmyMath.so libmyMath.a maind mains *.o

