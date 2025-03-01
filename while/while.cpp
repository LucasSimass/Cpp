#include <iostream>

int main()
{
    int n = 0;

    while (n++ < 10)
    {
       std::cout << n << std::endl;
       if (n == 7) break;
    }
    
    system("pause");

    return 0;
}