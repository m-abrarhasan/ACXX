#include <iostream>
#include <string>

// int main()
//{
// std::string name;

// std::cout << "what is your name: ";
// std::cin >> name;

// const std::string msg = "Hi " + name + ", welcome to c++ journey!";
// const std::string msgSpace(msg.size(), ' ');
// const std::string spaceLine = ":: " + msgSpace + " ::";
// const std::string barLine(spaceLine.size(), ':');

// std::cout << "\n" << barLine << std::endl;
// std::cout << spaceLine << std::endl;
// std::cout << ":: " << msg << " ::"<< std::endl;
// std::cout << spaceLine << std::endl;
// std::cout << barLine << std::endl;

// return 0;

//}

int main(int, char **) {
  std::cout << "Hello, world! What's your name?\n";
  std::string name;
  std::cin >> name;
  std::cout << "Hi, " << name << "\n";
  std::cout << "Where are you from? ";
  std::cin >> name;
  std::cout << name << " is a nice place!";
}
