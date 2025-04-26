BINARY_NAME = psalter
.DEFAULT_GOAL := all

all: clean install

clean:
	rm -f $(BINARY_NAME)

install:
	gcc main.c psalms.c -o $(BINARY_NAME)

.PHONY: clean install
