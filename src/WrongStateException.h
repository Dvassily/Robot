#ifndef __WRONGSTATEEXCEPTION_H__
#define __WRONGSTATEEXCEPTION_H__

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

#endif // __WRONGSTATEEXCEPTION_H__
