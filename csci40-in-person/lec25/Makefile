# This is a Makefile comment

# every rule looks like
# target: ingredient1 ingredient2 ...
#     terminal commands to
#     make the target
#     from the ingredients

main: searching.o main.o
	g++ -std=c++17 searching.o main.o -o main

searching.o: searching.cpp
	g++ -std=c++17 -c searching.cpp

main.o: main.cpp
	g++ -std=c++17 -c main.cpp

