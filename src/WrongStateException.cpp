#include "WrongStateException.h"

WrongStateException::WrongStateException(std::string action)
    : msg("Can't '" + action + "' in current state")
{ }

const char* WrongStateException::what() const throw () {
    return msg.c_str(); 
}
