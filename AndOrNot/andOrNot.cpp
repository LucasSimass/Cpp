#include <iostream>
#include <Windows.h>

void print(std::string message){
    std::cout << message;
}

int main(){
    int n1;
    int n2;
    char opc;

    bool isRunningFalse = false;
    bool isRunningTrue = !isRunningFalse;

    // 1 == true 
    // 0 == false 
    // !0 = 1
    // !1 = 0
    start:

    print("N1: ");
    std::cin >> n1;
    print("N2: ");
    std::cin >> n2;

    if(n1 <= n2){
        std::cout << n1 << " <= " << n2 << std::endl;
    } else {
        std::cout << n1 << " >= " << n2 << std::endl;
    }

    loop:
    std::cout << "Fazer novamente? [s/n]: ";
    std::cin >> opc;
    
    
    if (opc == 's' || opc == 'S'){
        goto start; // restart to the start´s point that we mark
    } else if (opc == 'n' or opc == 'N'){
        std::cout << "Prompt encerrado!" << std::endl;
    } else {
        std::cout << "Algo deu errado, digite 's' ou 'n' para seguir em frente!" << std::endl; 
        goto loop; // the loop will stop after the user use 's' or 'n' to confirm what he want
    }
    return 0;
}