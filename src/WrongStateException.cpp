#include "WrongStateException.h"

WrongStateException::WrongStateException(std::string state, std::string behaviour)
    : state(state), behaviour(behaviour)
{ }

const char* WrongStateException::what() const throw () {
    return "Can't '" + behaviour + "' in state '" + state + "'";
}
