#ifndef DEFAIREEXCEPTION_H
#define DEFAIREEXCEPTION_H

#include <exception>
#include <string>

class DefaireException : public std::exception {
 private:
    std::string msg;
    
 public:
    DefaireException(std::string action);
    const char* what() const throw ();
};

#endif /* DEFAIREEXCEPTION_H */
