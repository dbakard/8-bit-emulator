.PHONY: all build

build:
	mkdir -p build
	cd build && cmake .. && make

all: build
