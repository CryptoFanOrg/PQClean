# This Makefile can be used with GNU Make or BSD Make

LIB=libhqc-256_clean.a
HEADERS=api.h bch.h code.h fft.h gf2x.h gf.h hqc.h parameters.h parsing.h repetition.h vector.h 
OBJECTS=bch.o code.o fft.o gf2x.o gf.o hqc.o kem.o parsing.o repetition.o vector.o 

CFLAGS=-O3 -Wall -Wextra -Wpedantic -Wvla -Werror -Wredundant-decls -Wmissing-prototypes -std=c99 -I../../../common $(EXTRAFLAGS)

all: $(LIB)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(LIB): $(OBJECTS)
	$(AR) -r $@ $(OBJECTS)

clean:
	$(RM) $(OBJECTS)
	$(RM) $(LIB)
