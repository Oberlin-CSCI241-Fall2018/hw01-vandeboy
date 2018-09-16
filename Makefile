TARGETS = hello rot128 diamond

all: $(TARGETS)

hello: hello.o
	gccx -o hello hello.o

hello.o: hello.c
	gccx -c hello.c

rot128: rot128.o
	gccx -o rot128 rot128.o

rot128.o: rot128.c
	gccx -c rot128.c

diamond: diamond.o
	gccx -o diamond diamond.o

diamond.o: diamond.c
	gccx -c diamond.c

clean:
	rm hello rot128 diamond hello.o rot128.o diamond.o
