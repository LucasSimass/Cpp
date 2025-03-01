#include <iostream>

void pausar(){
    system("pause");
}

int main(){
    
    int x = 10;
    int y = 20;

    std::cout <<"Valor antigo: "<< x << std::endl;

    
    // x *= 2 || x = x * 2
    // x /= 2 || x = x / 2
    x++; // pós-incremento ou pós-fixado
    ++x; // pré-incremento ou pré-incremento
    
    std::cout <<"Valor novo: " << x << std::endl;

// -----------------------------------------------
    std::cout << y++ << std::endl; // a variavel é usado antes da incrementação do valor (pós-fixado)
    std::cout << ++y << std::endl; // a variavel é usado depois da incrementação do valor (pré-fixado)

    pausar();

    return 0;
}
