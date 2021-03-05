#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
    ZombieEvent event;
    Zombie *c0 = event.randomChump();
    Zombie *z0 = event.newZombie("Sameo");
    ZombieEvent event1;
    event1.setZombieType(1);
    Zombie *c1 = event1.randomChump();
    Zombie *z1 = event1.newZombie("Thomas");
    ZombieEvent event2;
    event2.setZombieType(2);
    Zombie *c2 = event2.randomChump();
    Zombie *z2 = event2.newZombie("Quentin");
    ZombieEvent event3;
    event3.setZombieType(3);
    Zombie *c3 = event3.randomChump();
    Zombie *z3 = event3.newZombie("Alexis");
    ZombieEvent event4;
    event4.setZombieType(4);
    Zombie *c4 = event4.randomChump();
    Zombie *z4 = event4.newZombie("Bastien");
    c0->advert();
    z0->advert();
    z3->advert();
    c3->advert();
    c1->advert();
    z1->advert();
    c2->advert();
    c4->advert();
    z4->advert();
    z2->advert();
    delete c0;
    delete z0;
    delete c1;
    delete z1;
    delete c2;
    delete z2;
    delete c3;
    delete z3;
    delete c4;
    delete z4;
    return (0);
}