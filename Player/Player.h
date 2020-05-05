#pragma once
#include <string>
#include <iostream>

class Player
{
private:
	std::string name;
	int health;
	int power;
	int xp;
	int ex_level;
	
public:
	//take damage

	void take_damage(int damage);


	//getters
	std::string get_name();
	int get_health();
	int get_power();
	int get_xp();
	int get_ex_level();


	//setters
	void set_name(std::string);
	void set_health(int new_health);
	void set_power(int new_power);
	void set_xp(int new_xp);
	void set_ex_level(int new_ex_level);

	//Contructor

	
	Player(std::string nameC = "Hero", int healthC = 100 ,int powerC = 10 , int xpC = 0, int ex_levelC = 1);

	
};

