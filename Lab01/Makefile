sources = Zad01.c Zad02.c Zad03.c Zad04.c Zad05.c Zad06.c

programs = $(basename $(sources))
objects = $(addsuffix .o, $(programs))

CFLAGS = -Wall -std=c11 -D_GNU_SOURCE
LDLIBS = -lm

.PHONY : clean
clean :
	-$(RM) $(objects) $(programs) *~

all : $(programs)
