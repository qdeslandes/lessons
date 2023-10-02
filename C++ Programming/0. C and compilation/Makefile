all: compilation data_size

compilation.i: compilation.c
	cpp -o $@ $<

compilation.S: compilation.i
	gcc -S -o $@ $<

compilation.o: compilation.S
	as -o $@ $<

compilation: compilation.o
	ld -o $@ -e main -lc $<

data_size: data_size.c
	gcc -o $@ $<

clean:
	-rm compilation.i compilation.S compilation.o compilation data_size
