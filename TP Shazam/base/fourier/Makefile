CC = gcc
CFLAGS = -Wall -O2 -I./fftw-3.3.10/api
CLIBS =  -L./fftw-3.3.10/.libs -lfftw3 -lm

all: main

SOURCES = $(wildcard *.c)
HEADERS = $(wildcard *.h)
OBJECTS = $(SOURCES:.c=.o)

main: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@ $(CLIBS)

clean:
	rm -f $(OBJECTS) *~

realclean: clean
	rm -f depend

distclean: realclean
	rm -f main

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

depend: $(SOURCES)
	@$(CC) $(CFLAGS) -MM $(SOURCES) > depend

-include depend

# End Of File
