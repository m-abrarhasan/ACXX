#ifndef DEBUGMSG_HPP
#define DEBUGMSG_HPP
#include <iostream>

void debugmsg(int &debugmsg, std::string variable = "") {
  std::cout << "\t****Debug : " << variable;
  std::cout << debugmsg;
}

void debugmsg(char &debugmsg, std::string variable = "") {
  std::cout << "\t****Debug : " << variable;
  std::cout << debugmsg;
}

void debugmsg(std::string &debugmsg, std::string variable = "") {
  std::cout << "\t****Debug : " << variable;
  std::cout << debugmsg;
}

#endif // DEBUGMSG_HPP
