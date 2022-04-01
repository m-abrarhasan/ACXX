#include <iostream>
#include <string>

int main()
{
  std::string s1, s2;
  int i1, i2;
  double d1, d2;
  char c1, c2;

  std::cout << "enter two strings = ";
  std::cin >> s1 >> s2;
  std::cout << "enter two integers = ";
  std::cin >> i1 >> i2;
  std::cout << "enter two double = ";
  std::cin >> d1 >> d2;
  std::cout << "enter two chars = ";
  std::cin >> c1 >> c2;
  std::cout << std::endl;

  std::cout << s1 << "\t" << s2 << std::endl;
  std::cout << i1 << "\t" << i2 << std::endl;
  std::cout << d1 << "\t" << d2 << std::endl;
  std::cout << c1 << "\t" << c2 << std::endl;
}
