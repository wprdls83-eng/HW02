// Magician.cpp

#include "Magician.h"
#include <iostream>

Magician::Magician(std::string nickname) : Player(nickname)
{
    job_name = "마법사";
    std::cout << "마법사로 전직하엿습니다!" << std::endl;
    level = 8;
    HP = 200;
    MP = 300;
    power = 30;
    defence = 10;
    accuracy = 80;
    speed = 6;
}

void Magician::attack()
{
    std::cout << nickname << " : 에너지 볼트! " << std::endl;
}

void printPlayerStatus();