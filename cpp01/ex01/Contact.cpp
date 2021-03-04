#include "phone.hpp"
#include <string>
#include <iostream>

Contact::Contact(void)
{
    return;
}

Contact::~Contact(void)
{
    return;
}

void Contact::set_first_name(void)
{
    std::cout << "\e[0mFirst name: ";
    while (std::getline(std::cin, this->first_name))
    {
        if (this->first_name.empty() || this->first_name.find_first_of("0123456789") != std::string::npos)
            std::cout << "\e[93mWrong first name ! Try again." << std::endl << "\e[0mFirst name: ";
        else
         break;
    }
}

std::string Contact::get_first_name(void)
{
    return (this->first_name);
}


void Contact::set_last_name(void)
{
    std::cout << "\e[0mLast name: ";
    while (std::getline(std::cin, this->last_name))
    {
        if (this->last_name.empty() || this->last_name.find_first_of("0123456789") != std::string::npos)
            std::cout << "\e[93mWrong last name ! Try again." << std::endl << "\e[0mLast name: ";
        else
            break;
    }
}

std::string Contact::get_last_name(void)
{
    return (this->last_name);
}

void Contact::show_all(int i)
{
    std::string space = "                    ";
    int size;

    std::cout << "|" << i << "  |";
    size = this->get_first_name().size();
    if (size > 20)
        size = 20;
    std::cout << this->get_first_name().substr(0, 20) <<  space.substr(0, 20 - size) << "|";
    size = this->get_last_name().size();
    if (size > 19)
        size = 19;
    std::cout << this->get_last_name().substr(0, 19) <<  space.substr(0, 19 - size) << "|";
    std::cout << std::endl;
}

void Contact::set_nickname(void)
{
    std::cout << "\e[0mNickname: ";
    std::getline(std::cin, this->nickname);
}

void Contact::set_login(void)
{
    std::cout << "\e[0mLogin: ";
    std::getline(std::cin, this->login);
}

void Contact::set_postal(void)
{
    std::cout << "\e[0mPostal address: ";
    std::getline(std::cin, this->postal);
}

void Contact::set_email(void)
{
    std::cout << "\e[0mEmail: ";
    while (std::getline(std::cin, this->email))
    {
        if (!this->email.empty() && this->email.find("@") == std::string::npos)
            std::cout << "\e[93mWrong email ! Try again." << std::endl << "\e[0mEmail: ";
        else
            break;
    }
}

void Contact::set_phone(void)
{
    std::cout << "\e[0mPhone Number: ";
    int i = -1;
    while (std::getline(std::cin, this->phone))
    {
        if (!this->phone.empty() && !this->phone.find_first_not_of("0123456789"))
            std::cout << "\e[93mWrong phone number ! Try again." << std::endl << "\e[0mPhone Number: ";
        else
            break;
    }
}

void Contact::set_birth(void)
{
    std::cout << "\e[0mBirthdate (ddMMYYYY): ";
    while (std::getline(std::cin, this->birth))
    {
        if (!this->birth.empty() && (!this ->birth.find_last_not_of("0123456789") ||this->birth.size() < 8))
            std::cout << "\e[93mWrong birthdate ! Try again." << std::endl << "\e[0mBirthdate (ddMMYYYY): ";
        else
            break;
    }
}

void Contact::set_meal(void)
{
    std::cout << "\e[0mFavorite meal: ";
    std::getline(std::cin, this->nickname);
}

void Contact::set_underwear(void)
{
    std::cout << "\e[0mUnderwear color: ";
    std::getline(std::cin, this->underwear);
}

void Contact::set_secret(void)
{
    std::cout << "\e[0mDarkest secret: ";
    std::getline(std::cin, this->secret);
}

std::string Contact::get_nickname(void)
{
    return (this->nickname);
}

std::string Contact::get_login(void)
{
    return (this->login);
}

std::string Contact::get_postal(void)
{
    return (this->postal);
}

std::string Contact::get_email(void)
{
    return (this->email);
}
std::string Contact::get_phone(void)
{
    return (this->phone);
}
std::string Contact::get_birth(void)
{
    return (this->birth);
}
std::string Contact::get_meal(void)
{
    return (this->meal);
}
std::string Contact::get_underwear(void)
{
    return (this->underwear);
}
std::string Contact::get_secret(void)
{
    return (this->secret);
}

void Contact::show_one(void)
{
    std::cout << "\e[92mFirst Name: \e[0m" << this->first_name << std::endl;
    std::cout << "\e[92mLast Name: \e[0m" << this->last_name << std::endl;
    if (!this->nickname.empty())
        std::cout << "\e[92mNickname: \e[0m" << this->nickname << std::endl;
    if (!this->login.empty())
        std::cout << "\e[92mLogin: \e[0m" << this->login << std::endl;
    if (!this->postal.empty())
        std::cout << "\e[92mPostal Address: \e[0m" << this->postal << std::endl;
    if (!this->email.empty())
        std::cout << "\e[92mEmail: \e[0m" << this->email << std::endl;
    if (!this->phone.empty())
        std::cout << "\e[92mPhone Number: \e[0m" << this->phone << std::endl;
    if (!this->birth.empty())
        std::cout << "\e[92mBirthdate: \e[0m" << this->birth << std::endl;
    if (!this->meal.empty())
        std::cout << "\e[92mFavorite meal: \e[0m" << this->meal << std::endl;
    if (!this->underwear.empty())
        std::cout << "\e[92mUnderwear Color: \e[0m" << this->underwear << std::endl;
    if (!this->secret.empty())
        std::cout << "\e[92mDarkest Secret: \e[0m" << this->secret << std::endl;
    std::cout << std::endl;
}