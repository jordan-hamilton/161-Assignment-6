#include <iostream>
#include "Player.hpp"

using std::cout;
using std::endl;

int main() {
  Player p1("Charlotte", 24, 10, 7);
  cout << "p1: " << p1.getName() << " " << p1.getPoints() << " " << p1.getRebounds() << " " << p1.getAssists() << endl;

  Player p2("Emily", 21, 13, 9);
  cout << p1.hasMorePointsThan(p2) << endl;
  cout << p2.hasMorePointsThan(p1) << endl;
  p1.setPoints(1);
  p1.setRebounds(2);
  p1.setAssists(3);
  cout << "p1: " << p1.getName() << " " << p1.getPoints() << " " << p1.getRebounds() << " " << p1.getAssists() << endl;

  Player p3("Anne", 20, 10, 8);
  Player p4("Jane", 19, 10, 10);
  Player p5("Mary", 18, 11, 8);
  Player p6;
  cout << p6.getName() << endl;
  p5.setRebounds(12);
  return 0;
}
