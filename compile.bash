g++ -c chessboard.cpp
g++ -c chessboard.h
g++ -c main.cpp
g++ main.o chessboard.o -o main.bin
./main.bin
