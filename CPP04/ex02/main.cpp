#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"
int main()
{
    std::cout << "\e[93mBasics Tests" << std::endl;
    ISpaceMarine* a = new TacticalMarine;
    ISpaceMarine* b = new AssaultTerminator;
    ISpaceMarine* c = new TacticalMarine;
    ISpaceMarine* d = new AssaultTerminator;
    ISpaceMarine* e = new TacticalMarine;
    ISpaceMarine* f = new AssaultTerminator;
    ISpaceMarine* g = new TacticalMarine;
    ISpaceMarine* h = new AssaultTerminator;
    ISquad* vlc = new Squad;
    vlc->push(a);
    vlc->push(b);
    vlc->push(c);
    vlc->push(d);
    vlc->push(e);
    vlc->push(f);
    vlc->push(g);
    vlc->push(h);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
    std::cout << "\e[92mAdvanced Checks" << std::endl;
    ISpaceMarine* i = new TacticalMarine;
    ISpaceMarine* j = i->clone();
    ISquad* dlc = new Squad;
    dlc->push(i);
    dlc->push(i);
    dlc->push(j);
    dlc->push(NULL);
    for (int i = 0; i < dlc->getCount(); ++i)
    {
        ISpaceMarine* cur = dlc->getUnit(i);
        cur->battleCry();
    }
    delete dlc;
    return 0;
}