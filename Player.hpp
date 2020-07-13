#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>
class Player {

  private:
    std::string playerName;
    int playerPoints;
    int playerRebounds;
    int playerAssists;
  public:
    Player();
    Player(std::string nameIn, int pointsIn, int reboundsIn, int assistsIn);
    std::string getName();
    void setPoints(int pointsIn);
    int getPoints();
    void setRebounds(int reboundsIn);
    int getRebounds();
    void setAssists(int assistsIn);
    int getAssists();
    bool hasMorePointsThan(Player otherGuy);
};

#endif
