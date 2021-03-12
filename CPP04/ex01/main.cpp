#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRiffle.hpp"
#include "PowerFist.hpp"
#include "AWeapon.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Margwa.hpp"
#include "RayGun.hpp"

int main()
{
    Character* me = new Character("me");

    std::cout << *me;

    Enemy* b = new RadScorpion();
    Enemy* c = new Margwa();

    AWeapon* pr = new PlasmaRiffle();
    AWeapon* pf = new PowerFist();
    AWeapon* rg = new RayGun();
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);

    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->equip(rg);
    std::cout << *me;
    me->recoverAP();
    std::cout << *me;
    me->recoverAP();
    std::cout << *me;
    me->recoverAP();
    std::cout << *me;
    me->recoverAP();
    std::cout << *me;
    me->recoverAP();
    std::cout << *me;
    me->recoverAP();
    me->attack(c);
    me->attack(c);
    me->attack(c);
    std::cout << *me;
    delete pr;
    delete pf;
    delete rg;
    delete me;
    return 0;
}