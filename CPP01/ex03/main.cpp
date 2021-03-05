#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
    ZombieHorde *horde = new ZombieHorde(3, 4);
    horde->announce();
    ZombieHorde *horde2 = new ZombieHorde(12, 1);
    horde2->announce();
    ZombieHorde *horde3 = new ZombieHorde(5, 3);
    horde3->announce();
    ZombieHorde *horde4 = new ZombieHorde(10, 2);
    horde4->announce();
    ZombieHorde *horde5 = new ZombieHorde(20, 0);
    horde5->announce();
    delete horde;
    delete horde2;
    delete horde3;
    delete horde4;
    delete horde5;
    return (0);
}