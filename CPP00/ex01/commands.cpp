#include "phone.hpp"

Contact add(Contact contact)
{
    std::cout << std::endl;
    contact.set_first_name();
    contact.set_last_name();
    contact.set_nickname();
    contact.set_login();
    contact.set_postal();
    contact.set_email();
    contact.set_phone();
    contact.set_birth();
    contact.set_meal();
    contact.set_underwear();
    contact.set_secret();
    std::cout << "\e[92mThe Contact \e[93m" << contact.get_first_name() << " " << contact.get_last_name() << "\e[92m has been succesfully added to your list !" << std::endl;
    return contact;
}

void search(Contact *all, int prec)
{
    int i = -1;
    int req;

    if (all[0].get_first_name().empty())
    {
        std::cout << "The contact list is \e[92mempty\e[0m ! Add a contact with the command \e[93mADD\e[0m !" << std::endl << std::endl;
        return ;
    }
    std::cout << "\e[0m ____________________________________ " << std::endl;
    std::cout << "\e[0m|N° |First name|Last  name|  Login   |" << std::endl;
    std::cout << "|___|__________|__________|__________|" << std::endl;
    while ( ++i < 9 && !all[i].get_first_name().empty())
        all[i].show_all(i);
    std::cout << "|___|__________|__________|__________|" << std::endl << std::endl;
    if (!prec)
        return ;
    std::cout << "What contact do you want to see ? (-1: cancel)" << std::endl << "\e[92m> \e[93m";
    req = get_choice();
    while (req >= i)
    {
        std::cout << "\e[91mOOPS ! This contact don't exist for the moment, try again!\e[0m" << std::endl << "\e[92m> \e[93m";
        req = get_choice();
    }
    if (req == -1)
        return;
    all[req].show_one();
}