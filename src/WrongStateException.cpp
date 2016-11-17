#include "WrongStateException.h"

WrongStateException::WrongStateException(std::string state, std::string behaviour)
    : state(state), behaviour(behaviour)
{ }

const char* WrongStateException::what() const throw () {
    std::string msg("Can't '" + behaviour + "' in state '" + state + "'");
    return msg.c_str();
}
