class Figure {
public:
  char code;
  Figure();
};
class Pawn: public Figure{
public:
  Pawn();
};
class Chessboard {
public:
  Figure board [8][8];
  bool move(char initial_position[2], char final_position[2]);
  void print();
  Chessboard();
  void initialize();
};
class Rook: public Figure{
public:
  Rook();
};
class Knight: public Figure{
public:
  Knight();
};
class Bishop: public Figure{
public:
  Bishop();
};
class Queen: public Figure{
public:
  Queen();
};
class King: public Figure{
public:
  King();
};
