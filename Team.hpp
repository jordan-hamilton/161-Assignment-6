/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 02/14/2018
 ** Description: Specification file for the Team class.
 *********************************************************************/

#ifndef TEAM_HPP
#define TEAM_HPP


#include "Player.hpp"

class Team {

  private:
    Player pointGuard;
    Player shootingGuard;
    Player smallForward;
    Player powerForward;
    Player center;

  public:
    Team(Player pgIn, Player sgIn, Player sfIn, Player pfIn, Player cIn);
    void setPointGuard(Player pointGuardIn);
    Player getPointGuard();
    void setShootingGuard(Player shootingGuardIn);
    Player getShootingGuard();
    void setSmallForward(Player smallForwardIn);
    Player getSmallForward();
    void setPowerForward(Player powerForwardIn);
    Player getPowerForward();
    void setCenter(Player centerIn);
    Player getCenter();
    int totalPoints();

};


#endif
