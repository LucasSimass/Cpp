#include <iostream>

int main()
{
    int val;

    std::cout << "Insert a value to get a color: ";
    std::cin >> val;

    switch (val)
    {
    case 1:
        std::cout << "Green" << std::endl;
        break;
    case 2:
        std::cout << "Red" << std::endl;
        break;
    case 3:
        std::cout << "Blue" << std::endl;
        break;
    default:
        std::cout << "Black" << std::endl;
        break;
    }
    system("pause");
    return 0;
}