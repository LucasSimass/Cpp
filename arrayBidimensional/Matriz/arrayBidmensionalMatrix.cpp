#include <iostream>
#include <stdio.h>


int main()
{
    int array_Matriz1[3][3] = { // array_Matriz[linhas][colunas]
        {1,2,3},
        {4,5,6},
        {7,8,9}
    }; // Array Bidmensional ou Matriz  
    
    int array_Matriz[3][3];

    
    // array_Matriz[0][0] = 20;
    // array_Matriz[0][1] = 50;
    // array_Matriz[0][2] = 70;
    // array_Matriz[1][0] = 90;
    // array_Matriz[1][1] = 320;
    // array_Matriz[1][2] = 54;
    // array_Matriz[2][0] = 525;
    // array_Matriz[2][1] = 41;
    // array_Matriz[2][2] = 211;

    int linha;
    int coluna;

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            std::cin >> array_Matriz1[linha][coluna];
        }
    }

    int tamanhoArrayMatriz = sizeof(array_Matriz) / sizeof(array_Matriz[0][0]); // (36 bytes / 4 bytes) = 9   
    int tamanhoMaxLinha = sizeof(array_Matriz[0]) / sizeof(array_Matriz[0][0]); // tamanho da linha de cada Array/Matriz 

    std::cout << tamanhoArrayMatriz << std::endl; // output -> 9 

    std::cout << "---------------------" << std::endl;

    for(linha = 0; linha < sizeof(array_Matriz1) / sizeof(array_Matriz1[0]); linha++){
       for(coluna = 0; coluna < sizeof(array_Matriz[0]) / sizeof(array_Matriz[0][0]); coluna++){
            std::cout << "Linha: " << linha << " | Coluna: " << coluna << " | Valor: "  << array_Matriz1[linha][coluna] << std::endl;
       }
    }
    std::cout << "---------------------" << std::endl;

    std::cout << array_Matriz[0]<< std::endl;
    return 0;
}