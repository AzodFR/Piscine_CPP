#ifndef PHONE_HPP
# define PHONE_HPP
# include "Contact.hpp"

int get_choice(void);
int override_contact(int *i, Contact *all);

Contact add(Contact contact);
void search(Contact *all, int prec);
#endif