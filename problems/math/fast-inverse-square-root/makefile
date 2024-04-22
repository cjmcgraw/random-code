
all: build_dir main

build_dir: clean
	mkdir build

deps: 
	gcc -c src/q_rsqrt.c -o build/q_rsqrt.o

main: deps
	gcc src/main.c build/q_rsqrt.o -o build/main

clean:
	rm -rf build
