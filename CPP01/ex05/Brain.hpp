#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
class Brain
{
    public:
        Brain(void);
        ~Brain(void);
        std::string identifier(void) const;
    private:
        int knowledge;
        int age;
};
#endif