#include <iostream>

/*
    Varíaveis Globais podem acessar qualquer parte do código
*/
int xGlobal = 0; // Varíaveis Globais
int yGlobal = 0; // Varíaveis Globais

void pausar(){
    system("pause");
}


int somar(int x){
    return x++;
}

int main(){
    /*Variaveis Locais podem acessa apenas a função a qual pertencem (caso queira que os dados da variavel vá para outra função só adiciona-la dentro do parametro da função desejada)*/
    int x = 0; // Varíaveis Locais
    int y = 0; // Variaveis Locais

    xGlobal = 2;
    // Operadores Matematicos: + - / * % ()

    int n1 = 2;
    int n2 = 4;
    int n3 = 10;
    
    int res = n1 + n2 + n3;

    int div = n2 / n1;
    int resto = n2 % n1;

    std::cout << "A soma de todas as variáveis de n1 a n3 é: " << res << std::endl; 

    std::cout << "Div: " << div << std::endl;
    std::cout << "Res: " << resto << std::endl; 

    somar(x);
    pausar();
    return 0 ;
}