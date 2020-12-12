enum Name {
  AMANDA = 1
  ANDREA = 2
  NICK = 3
  MAX = 4
  LOGAN = 5
  ADAM = 6
}

std::array<Name> unassigned = {AMANDA, ANDREA, NICK, MAX, LOGAN, ADAM};
std::array<Name> ran_program = {};

int main() {
  cout << "Who are you? 1 for Amanda, 2 for Andrea, 3 for Nick, 4 for Max, 5 for Logan, 6 for Adam";
  int person;
  cin << person;
  return 0;
}
