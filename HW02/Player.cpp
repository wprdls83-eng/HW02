// Player.cpp

#include <string>
#include <iostream>
#include "Player.h"

Player::Player(std::string nickname) : nickname(nickname)
{
	job_name = "Adventurer";
	level = 1;
	HP = 200;
	MP = 100;
	power = 15;
	defence = 10;
	accuracy = 90;
	speed = 10;
}

void Player::printPlayerStatus()
{
	std::cout << "직업: " << job_name << std::endl;
	std::cout << "이름: " << nickname << std::endl;
	std::cout << "레밸: " << level << std::endl;
	std::cout << "HP: " << HP << std::endl;
	std::cout << "MP: " << MP << std::endl;
	std::cout << "공격력: " << power << std::endl;
	std::cout << "방어력: " << defence << std::endl;
	std::cout << "명중률: " << accuracy << std::endl;
	std::cout << "이동속도: " << speed << std::endl;
}

std::string Player::getJobName() { return job_name; }
std::string Player::getNickname() { return nickname; }
int Player::getlevel() { return level; }
int Player::getHP() { return HP; }
int Player::getMP() { return MP; }
int Player::getPower() { return power; }
int Player::getDefence() { return defence; }
int Player::getAccuracy() { return accuracy; }
int Player::getSpeed() { return speed; }

void Player::setNickname(std::string nick) { nickname = nick; }
void Player::setHP(int h) { HP = h; }
void Player::setMP(int m) { MP = m; }
void Player::setPower(int p) { power = p; }
void Player::setDefence(int d) { defence = d; }
void Player::setAccuracy(int a) { accuracy = a; }
void Player::setSpeed(int s) { speed = s; }