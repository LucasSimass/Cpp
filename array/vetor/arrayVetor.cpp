#include <iostream>
#include <math.h>

void print(int message[10]){
    std::cout << message << std::endl;   
}

void print(int message){
    std::cout << message << std::endl;   
}


void print(float message){
    std::cout << message << std::endl;   
}

void print(std::string message){
    std::cout << message << std::endl;   
}

int main()
{
    int vectorTeste[3] = {}; // para criar um array/vector em c++ vc precisa adicionar {} para definir o array/vetor
    int vetor[10]; // define a quantiade de posições que o array/vetor possui 
    int vectorSize = sizeof(vetor) / sizeof(vetor[0]);

    print(vectorSize);
    for(int i = 0; i < vectorSize; i++)
    {
        vetor[i] =  i * i;
        if (i == 10)
        {
            print(vetor[10]);
        } else 
        {
            print(vetor[i]);
        }
    }
}
