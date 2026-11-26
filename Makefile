all:

code: code.c
	gcc -O2 -o code code.c

.PHONY: all
