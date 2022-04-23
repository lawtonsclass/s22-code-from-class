# this is a comment in the Makefile language!

# every rule looks like:
# target: ingredients ...
#    terminal command(s)
#    to make the
#    target

main: main.o searching.o
	g++ -std=c++17 main.o searching.o -o main

main.o: main.cpp
	g++ -std=c++17 -c main.cpp

searching.o: searching.cpp
	g++ -std=c++17 -c searching.cpp

