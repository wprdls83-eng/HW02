// Thief.cpp

#include "Thief.h"
#include <iostream>

Thief::Thief(std::string nickname) : Player(nickname)
{
    job_name = "도적";
    std::cout << "도적으로 전직하엿습니다!" << std::endl;
    level = 10;
    HP = 250;
    MP = 150;
    power = 20;
    defence = 15;
    accuracy = 85;
    speed = 20;
}

void Thief::attack()
{
    std::cout << nickname << " : 럭키 세븐. " << std::endl;
}

void printPlayerStatus();
