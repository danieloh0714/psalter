BINARY_NAME = psalter

build:
	gcc main.c psalms.c -o $(BINARY_NAME)
