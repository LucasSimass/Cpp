#include <iostream> // gera uma biblioteca que permite a entrada e saida de dados

void imprimirVariaveis(int vidas, char letra ,char letras[5], 
                       double decimal,
                       float decimal2,
                       bool vivo,
                       std::string nome)
{

    std::cout << "Jogador possui: " << vidas << " Vidas" << std::endl;
    std::cout << letra << std::endl;
    std::cout << letras << std::endl;
    std::cout << "Jogador possui R$" << decimal << std::endl;
    std::cout << decimal2 << std::endl;
    std::cout << vivo << std::endl;
    std::cout << "Seu nome: " << nome << std::endl;
}

void pausar()
{
    system("pause");
}

int main()
{
    // TIPO NOME;
    // NOME = VALOR;

    int vidas = 3; // -1, 0, 2, 3, 4 | Numeros inteiros

    char letra = 'a'; // 'a', 'B', 'C', 'd' | é necessario o uso de '' para indicar caracter e "" para indicar uma string, pois o sistema define o quanto de memoria é necessario para cada uma.

    char letras[5] = "Amor"; // permite uma quantidade de caracteres dentro do char a qual o dev/usuario pode definir, isso ajuda para reduzir o consumo de memoria, entretanto limita a quantidade de caracteres a um número limitado || o letras[5] precisa de um caracter a mais para armazernar o valor nulo que delimita o final da string

    double decimal = 2.9999; // -3.4, 0.0 , 2.4, 5.3 | Números quebrados || double é mais preciso, porem consome mais memoria, util para sistemas que exigem mais precisão do que perfomance

    float decimal2 = 3.00; // semelhante ao decimal1, entretanto menos preciso e consome menos memoria, util para sistemas onde a performace é mais necessaria que a precisão

    bool vivo = true; // false, true | valores booleanos

    std::string nome = "Lucas"; // "Gabriel", "Pedro", "Julio" || conjunto de caracteres

    std::cout << "Digite o numero de vidas aqui: ";
    std::cin >> vidas;
    
    std::cout << "Digite um valor em real: ";
    std::cin >> decimal;

    std::cout << "Digite seu nome: ";
    std::cin >> nome;

    vidas = 100;

    imprimirVariaveis(vidas, letra, letras, decimal, decimal2, vivo, nome);
    pausar();
    return 0;
}