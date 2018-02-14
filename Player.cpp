#include "Player.hpp"
#include <string>

Player::Player() {
  playerName = "";
  setPoints(-1);
  setRebounds(-1);
  setAssists(-1);
}
Player::Player(std::string nameIn, int pointsIn, int reboundsIn, int assistsIn) {
  playerName = nameIn;
  setPoints(pointsIn);
  setRebounds(reboundsIn);
  setAssists(assistsIn);
}
std::string Player::getName() {
  return playerName;
}
void Player::setPoints(int pointsIn) {
  playerPoints = pointsIn;
}
int Player::getPoints() {
  return playerPoints;
}
void Player::setRebounds(int reboundsIn) {
  playerRebounds = reboundsIn;
}
int Player::getRebounds() {
  return playerRebounds;
}
void Player::setAssists(int assistsIn) {
  playerAssists = assistsIn;
}
int Player::getAssists() {
  return playerAssists;
}
bool Player::hasMorePointsThan(Player otherGuy) {
  return playerPoints > otherGuy.getPoints();
}
