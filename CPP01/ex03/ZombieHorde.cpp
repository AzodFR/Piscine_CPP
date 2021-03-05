#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int n, int type)
{
    std::string list[] = {	"Splendot","Flaky","Skeleton",
							"Lifty","Giggles","Ghoul",
							"Splendit","Mime","Banshee",
							"Toothy","Eurynome","Skull",
							"Shifty","Marjo","Lammy",
							"Lumpy","Demetra","Nutty",
							"Flippy","Cayla","Ghost",
							"Handy","Petunia","Creeper",
							"Eligos","Célina","Mole",
							"Raijin","Zarya","Dark",
							"Etem","Nia","Wolfsbane",
							"Wolf","Tasha","Zavia"};
	
    this->horde = new Zombie[n];
    this->n = n;
    int i = -1;
    while (++i < n)
    {
        srand((unsigned)time(NULL) + type + i);
        this->horde[i].set_name(list[rand() % 36]);
        this->horde[i].set_type(type);
    }
}

ZombieHorde::~ZombieHorde(void)
{
    delete [] this->horde;
}

void ZombieHorde::announce(void)
{
    int i = -1;

    while (++i < n)
        this->horde[i].announce();
}