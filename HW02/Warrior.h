// Warrior.h

#pragma once

#include "Player.h"

class Warrior : public Player
{
public:
    Warrior(std::string nickname);
  
    void attack() override;

    void printPlayerStatus();
};
