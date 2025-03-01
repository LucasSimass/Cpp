#include <iostream>

int main(){
    int count = 0;

    while (count > 20) {
        std::cout << count << std::endl;
    }
 
    std::cout << "Parte do Do" << std::endl;
    do{
        std::cout << count << std::endl;
    } while (count > 20);
    std::cout << "Programa Finalizado" << std::endl;
    return 0;
}