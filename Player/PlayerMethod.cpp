//ceate player with name,health, xp and power.

#include <iostream>
#include "Player.h"

int main()
{    
    Player hero;
    std::cout << hero.get_name() << std::endl;
    //ryu.set_name("Dragon");

    std::cout << hero.get_name() << std::endl;
    Player* enemy = new Player{ "Magneto",300, 60 , 400, 42 };
    
    enemy->take_damage(hero.get_power());
    
    std::cout << (*enemy).get_name() << std::endl;
    std::cout << enemy->get_health() << std::endl;
    delete enemy;
}
