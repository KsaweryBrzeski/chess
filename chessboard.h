class Figure {
public:
  char x;
  char y;
  Figure(char, char);
  Figure();
  char *printPosition();
  char *move(char x, char y);
};
