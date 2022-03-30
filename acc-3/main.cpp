#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    // control variables
    std::string name;
    const char border = '|';
    unsigned int padding = {3};

    // input
    std::cout << "Your name = ";
    std::cin >> name;
    std::cout << "Padding = ";
    std::cin >> padding;
    std::cout << "\n";

    // build msg structure
    const string greeting = "Hello " + name + "! Nice to meet you";
    const int vPad = padding;
    const int hPad = padding * 3; // vertical/horizontal padding ration = 1:3
    const int rows = vPad * 2 + 3;
    const string::size_type cols = greeting.size() + (hPad * 2) + 4;

    // invariant: written r number of rows
    for (int r = 0; r != rows; ++r)
    {
        // invariant: written c numer of colums/characters
        string::size_type c = 0;
        while (c != cols)
        {
            if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1 || c == 1 ||
                c == cols - 2)
            {
                cout << border;
                ++c;
            }
            else if (r == vPad + 1 && c == hPad + 2)
            {
                cout << greeting;
                c += greeting.size();
            }
            else
            {
                if (c == 2 && r != vPad + 1)
                {
                    std::string hline(greeting.size() + hPad * 2, ' ');
                    cout << hline;
                    c += hline.size();
                }
                else
                {
                    std::string hline(vPad, ' ');
                    cout << hline;
                    c += hline.size();
                }
            }
        }
        cout << "\n";
    }
    cout << std::endl;
    return 0;
}