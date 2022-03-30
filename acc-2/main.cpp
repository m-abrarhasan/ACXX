#include <iostream>
#include <string>

#include "xarlibs.h"

using std::cin;
using std::cout;
using std::string;

int main()
{
    clear();
    std::cout << "Your name = ";
    std::string name;
    std::cin >> name;
    std::cout << "\n";

    string greeting = "Hello " + name + "! Nice to meet you";

    int padding = 1;
    int rows = padding * 2 + 3;
    string::size_type cols = greeting.size() + (padding * 2) + 4;

    // invariant: written r number of rows
    for (int r = 0; r != rows; r++)
    {
        // invariant: written c numer of colums/characters
        string::size_type c = 0;
        while (c != cols)
        {
            if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1 || c == 1 ||
                c == cols - 2)
            {
                cout << "|";
                c++;
            }
            else if (r == padding + 1 && c == padding + 2)
            {
                cout << greeting;
                c += greeting.size();
            }
            else
            {
                cout << " ";
                c++;
            }
        }
        cout << "\n";
    }
    cout << "\n";
    return 0;
}