#include "DefaireException.h"

DefaireException::DefaireException(std::string command)
    : msg("Can't desexecute'" + command + "' command")
{ }

const char* DefaireException::what() const throw () {
    return msg.c_str(); 
}
