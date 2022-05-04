/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 02/14/2018
 ** Description: This implements a class that represents a basketball
 ** team. The data members are 5 player objects. A method returns the
 ** team's total points as an integer value.
 *********************************************************************/

 #include "Team.hpp"


 /*********************************************************************
 ** Description: Overloaded constructor initializing the team using
 ** 5 player objects.
 *********************************************************************/
Team::Team(Player pgIn, Player sgIn, Player sfIn, Player pfIn, Player cIn) {
  setPointGuard(pgIn);
  setShootingGuard(sgIn);
  setSmallForward(sfIn);
  setPowerForward(pfIn);
  setCenter(cIn);
}


void Team::setPointGuard(Player pointGuardIn) {
  pointGuard = pointGuardIn;
}


Player Team::getPointGuard() {
  return pointGuard;
}


void Team::setShootingGuard(Player shootingGuardIn) {
  shootingGuard = shootingGuardIn;
}


Player Team::getShootingGuard(){
  return shootingGuard;
}


void Team::setSmallForward(Player smallForwardIn) {
  smallForward = smallForwardIn;
}


Player Team::getSmallForward() {
  return smallForward;
}


void Team::setPowerForward(Player powerForwardIn) {
  powerForward = powerForwardIn;
}


Player Team::getPowerForward() {
  return powerForward;
}


void Team::setCenter(Player centerIn) {
  center = centerIn;
}


Player Team::getCenter() {
  return center;
}


/*********************************************************************
** Description: Sum the points for each data member using the Player
** getPoints method, then return the sum.
*********************************************************************/
int Team::totalPoints() {
  int points = pointGuard.getPoints() +
               shootingGuard.getPoints() +
               smallForward.getPoints() +
               powerForward.getPoints() +
               center.getPoints();
               
  return points;
}
