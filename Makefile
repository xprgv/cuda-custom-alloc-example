
all: run

build:
	gcc alloc.c -o alloc.so -I/usr/local/cuda/include -shared -fPIC

run: build
	python3 alloc.py