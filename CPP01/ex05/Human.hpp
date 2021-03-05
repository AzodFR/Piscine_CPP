#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"
# include <string>

class Human
{
    public:
        Human(void);
        ~Human(void);
        const Brain &getBrain(void);
        std::string identifier(void);
    private:
        const Brain brain;
};
#endif