g++ -c main.cpp threadOperations.cpp  -pthread -std=c++11 -g
g++ main.o threadOperations.o  -o main.out -pthread -std=c++11
