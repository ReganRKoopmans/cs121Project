#ifndef GAME_MASTER_H
#define GAME_MASTER_H

#include <vector>
#include "Unit.h"
#include <string>

class Map;
class Team;

using namespace std;

/**
* @class GameMaster
* @brief Controls the flow of operations in the simulation.
*
*/

class GameMaster
{
  public:
    GameMaster();
    void attachTeam(Team * inputTeam);
    void detachTeam(Team * inputTeam);
    void turn();
    bool moveUnit(Unit * inputUnit, string direction);
    void notify();
    void attack(Unit * attackingUnit, Team * attackTeam);
    int getNumberTeams();
  private:
    Map * map;
    vector<Team*> teams;
    unsigned int currentTurn;
};

#endif
