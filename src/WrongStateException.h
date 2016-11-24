#include <exception>
#include <string>

class WrongStateException : std::exception
{
private:
    std::string msg;
    
public:
    WrongStateException(std::string action);
    const char* what() const throw ();
};

