#include "chessboard.h"

#include <iostream>
Figure::Figure(){
  code = ' ';
}
Pawn::Pawn() {
  code = 'p';
}
Rook::Rook() {
  code = 'r';
}
Knight::Knight() {
  code = 'k';
}
Bishop::Bishop() {
  code = 'b';
}
Queen::Queen() {
  code = 'q';
}
King::King() {
  code = 'K';
}
Chessboard::Chessboard() {

}
void Chessboard::print() {
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      std::cout << board[j][i].code << " ";
    }
    std::cout<<std::endl;
  }
}
void Chessboard::initialize() {
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      board[i][j] = Figure();
    }
  }
  //creating pawns
  for (int i = 0; i < 8; i++) {
    board[i][1] = Pawn();
    board[i][6] = Pawn();
  }
  //creating rooks
  board[0][0] = Rook();
  board[7][0] = Rook();
  board[7][7] = Rook();
  board[0][7] = Rook();
  //creating bishop
  board[1][0] = Bishop();
  board[6][0] = Bishop();
  board[1][7] = Bishop();
  board[6][7] = Bishop();
  //creating knights
  board[2][0] = Knight();
  board[5][0] = Knight();
  board[2][7] = Knight();
  board[5][7] = Knight();

  //creating kings and queens
  board[3][0] = Queen();
  board[4][0] = King();
  board[3][7] = Queen();
  board[4][7] = King();
}
