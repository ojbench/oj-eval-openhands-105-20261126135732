all: code
code: code.cpp
g++ -O2 -o code code.cpp
.PHONY: all
