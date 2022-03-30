#ifndef VALIDATEINPUT_HPP
#define VALIDATEINPUT_HPP

#include "xarlibs.h"

int validateInput(char &input, char a, char b = '0', char c = '0', char d = '0',
                  char e = '0', char f = '0') {

  if (input == a || input == b || input == c || input == d || input == e ||
      input == f) {

    return input;

  } else {
    clear();
    std::cout << "\t[!!!] invalid input please try again\n";
    return 0;
  }
}

#endif // VALIDATEINPUT_HPP
