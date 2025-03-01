#include <iostream>

int main(){
    int count; 
    /*
        for (Inicialização (criar variavel); Condição; Incremento / Decremento){
            //Comandos...
        }
    */

    int x,y;
    for( x=0, y=0; x < 1000000000; x++, y += 2){
        //std::cout << x << std::endl;
        //std::cout << y << std::endl;
        if (x == 999999999){
            break;
        }
    }
    std::cout << "Programa finalizado" << std::endl;

    return 0;
}