#include <iostream>

void print(std::string menssage){
    std::cout << menssage << std::endl;
}

int main(){
    int x;
    std::cout << "X: ";
    std::cin >> x; 

    int y = 10;
    if (x > y){
        std::cout << "X maior que Y" << std::endl;
    } else {
        std::cout << "X menor que Y" << std::endl;
    }

    // os unicos operadores validos para o if serao 1 == true, 0 == false 
    if(1){
        std::cout << "1 equivale a true";
    }

    if (0){
        std::cout << "0 equivale a false, logo nao sera executado esse código" << std::endl;
    }

    // ira funcionar qualque valor acima de 1   
    if(-10){
        std::cout  << "nao ira funcionar pois 10 não é nem verdadeiro nem falso";
    } 

}