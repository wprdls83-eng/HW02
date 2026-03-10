// Archer.cpp

#pragma once

#include "Archer.h"
#include <iostream>

Archer::Archer(std::string nickname) : Player(nickname)
{
    job_name = "궁수";
    std::cout << "궁수로 전직하엿습니다!" << std::endl;
    level = 10;
    HP = 200;
    MP = 100;
    power = 20;
    defence = 10;
    accuracy = 100;
    speed = 12;
}

void Archer::attack()
{
    std::cout << nickname << " : 애로우 블로우! " << std::endl;
}

void printPlayerStatus();