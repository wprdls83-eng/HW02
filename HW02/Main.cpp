//Main.cpp

#include <iostream>
#include <string>
#include "Warrior.h"
#include "Magician.h"
#include "Thief.h"
#include "Archer.h"

int main()
{
    Player* player = nullptr; 
    int choice;
    std::string nickname;

    std::cout << "닉네임을 입력하세요: ";
    std::cin >> nickname;

    std::cout << "직업을 선택하세요:\n";
    std::cout << "1. 전사\n2. 마법사\n3. 도적\n4. 궁수\n";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        player = new Warrior(nickname);
        break;
    case 2:
        player = new Magician(nickname);
        break;
    case 3:
        player = new Thief(nickname);
        break;
    case 4:
        player = new Archer(nickname);
        break;
    default:
        std::cout << "잘못된 선택입니다.\n";
        return 0;
    }

    std::cout << "\n공격 실행\n";
    player->attack();

    std::cout << "\n플레이어 상태\n";
    player->printPlayerStatus();

    delete player;
}