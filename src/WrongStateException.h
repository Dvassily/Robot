#include <exception>
#include <string>

class WrongStateException : std::exception
{
private:
    std::string state;
    std::string behaviour;
    
public:
    WrongStateException(std::string state, std::string behaviour);
    const char* what() const throw ();
};

