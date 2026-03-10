// Warrior.cpp

#include "Warrior.h"
#include <iostream>

Warrior::Warrior(std::string nickname) : Player(nickname)
{
    job_name = "전사";
    std::cout << "전사로 전직하엿습니다!" << std::endl;
    level = 10;
    HP = 300;
    MP = 100;
    power = 25;
    defence = 15;
    accuracy = 95;
    speed = 8;
}

void Warrior::attack()
{
    std::cout << nickname << " : 파워 스트라이크! " << std::endl;
}

void printPlayerStatus();