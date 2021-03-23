#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>(){};
		MutantStack(const MutantStack& obj) : std::stack<T>(obj) {};
        virtual ~MutantStack() {};
        MutantStack &operator=(const MutantStack &obj)
		{
            if (this == &obj)
				return (*this);
            return (*new(this) MutantStack(obj));
        };
	typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	iterator begin()
		{
			return (std::stack<T>::c.begin()); 
		}
        iterator end()   
		{
			return (std::stack<T>::c.end());   
		}
        reverse_iterator rbegin()
		{
			return (std::stack<T>::c.rbegin());
		}
        reverse_iterator rend()
		{
			return (std::stack<T>::c.rend());
		}
};

#endif
