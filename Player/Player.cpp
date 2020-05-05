#include "Player.h"


Player::Player(std::string nameC, int healthC, int powerC, int xpC, int ex_levelC)
	: name{ nameC }, health{ healthC }, power{ powerC }, xp{ xpC }, ex_level{ ex_levelC }{
}


//take damage
void Player::take_damage(int damage) 
{
	health -= (damage * 1.23);
}


//---Setters-------
void Player::set_name(std::string new_name)
{
	name = new_name;	
}
void Player::set_health(int new_health)
{
	health = new_health;
}

void Player::set_power(int new_power)
{
	power = new_power;
}

void Player::set_xp(int new_xp)
{
	health = new_xp;
}

void Player::set_ex_level(int new_ex_level)
{
	ex_level = new_ex_level;
}



//---Getters-------
std::string Player::get_name() 
{
	return name;
}

int Player::get_health()
{
	return health;
}

int Player::get_xp()
{
	return xp;
}

int Player::get_power()
{
	return power;
}

int Player::get_ex_level()
{
	return ex_level;
}
