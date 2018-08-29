all: build.o

FLAGS = -Weverything -Wno-c++98-compat -Wno-c++98-compat-pedantic 

build.o: build.cpp
	clang++ -std=c++17 $(FLAGS) -c build.cpp 

clean:
	rm build.o
