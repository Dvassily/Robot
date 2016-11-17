#include "WrongStateException.h"

WrongStateException::WrongStateException(std::string action)
    : action(action)
{ }

const char* WrongStateException::what() const throw () {
    std::string msg("Can't '" + action + "' in current state");
    return msg.c_str();
}
