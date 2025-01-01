#include <iostream> // biblioteca que permite a entrada e saida de dados
#define pi 3.1415 // é mais recomendado o uso de const
#define rei std::cout << "Lucas é o rei" << std::endl; // conseguimos armazenar codigos no define

void imprimirMensagem(std::string mensagem){
    std::cout << mensagem << std::endl;
}

void pausar(){
    system("pause");
}

int main(){
    int vidas = 3, tiros = 6, saude = 100; // declarações multiplas de variaveis || por mais que isso seja considerado uma prática comum, evitarei de usar pois afeta diretamente a legibilidade do código

    // usarei esse modo que por mais que aumente o código, torna ele mais legivel
    int vidas1 = 3;
    int tiros1 = 6;
    int saude1 = 100;
    
    std::cout << pi << std::endl;
    rei;

    const std::string nome = "Lucas"; // esse valor não pode ser alterado durante a execução do programa, isso ajuda na organização e diminui a quantidade de possiveis erros 
    pausar();
    return 0;
}