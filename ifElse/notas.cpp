#include <iostream>

void print(std::string message){
    std::cout << message;
}

void printNoEndl(std::string message){
    std::cout << message;
}

int main(){
   
    inicio:

    system("cls");

    int n1;
    int n2;
    char opc;

    print("Nota n1: ");
    std::cin >> n1;

    print("Nota n2: ");
    std::cin >> n2;

    double res = (n1 + n2);
    
    if(res > 10) {
        print("\nAluno aprovado\n");
    } else if (res > 5){
        print("\nAluno em recuperação\n");
    } else {
        print("\nAluno reprovado\n");
    }

    print("Voce quer adicionar outras notas? [s/n]: ");
    std::cin >> opc;

    return 0;
}