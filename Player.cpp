/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 02/14/2018
 ** Description: This implements a class that represents a basketball
 ** player. The data members are the player's name, points, rebounds,
 ** and assists. A method compares the points to another
 ** player object.
 *********************************************************************/

#include "Player.hpp"

/*********************************************************************
** Description: Default constructor initializing player name as an
** empty string, and all statistics as -1.
*********************************************************************/
Player::Player() {
  playerName = "";
  setPoints(-1);
  setRebounds(-1);
  setAssists(-1);
}


/*********************************************************************
** Description: Overloaded constructor initializing the player's name
** to the entered string and setting all statistics to the provided
** integer parameters.
*********************************************************************/
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


/*********************************************************************
** Description: Compare the integers returned from the getPoints
** method on our object and the object specified in arguments,
** returning whether the current player has more points as a boolean.
*********************************************************************/
bool Player::hasMorePointsThan(Player otherGuy) {
  return getPoints() > otherGuy.getPoints();
}
