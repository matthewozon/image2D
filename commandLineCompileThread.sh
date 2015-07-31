rm *.o main.out
#g++ -c threadOperations.cpp -g
g++ -c threadOperations.cpp main.cpp  -pthread -std=c++11 -g
g++ main.o threadOperations.o  -o main.out -pthread -std=c++11
