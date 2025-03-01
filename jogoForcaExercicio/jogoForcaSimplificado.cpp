#include <iostream>

int main()
{
    char palavraEncontrar[12] = "c_o_r_r_e_r"; 
    char palavraBorrada[12] = "_ _ _ _ _ _";
    int tamanhoPalavra = sizeof(palavraBorrada) / sizeof(palavraBorrada[0]);
   
    char letraTentativa;
    int acertos = 0;
    int vidas = 5;

    while(acertos < 6)
    {

        std::cout << "\nDigite uma letra: ";
        std::cin >> letraTentativa;
    
        std::cout << "\n-----------------------------------\n" << std::endl;
        int letrasAcertadasSequencialmente = 0;
        for(int i = 0; i < tamanhoPalavra; i++)
        {
            if(i == 11 && letrasAcertadasSequencialmente == 0){
                vidas--;
                std::cout << "\nVc errou e perdeu 1 vida!" << std::endl;
                std::cout << "\nVidas: " << vidas << std::endl;
                std::cout << "\n-----------------------------------\n" << std::endl;
            }

            if(palavraEncontrar[i] == letraTentativa)
            {   
                letrasAcertadasSequencialmente++;
                acertos++;

                palavraBorrada[i] = letraTentativa;
                
                if (letrasAcertadasSequencialmente == 1)
                {
                    std::cout << "\nVc encontrou a letra: " <<  letraTentativa << std::endl;
                    std::cout << "\n-----------------------------------\n" << std::endl;
                }
            }
        }
        letrasAcertadasSequencialmente = 0;
        if(vidas == 0){
            std::cout << "\nVc perdeu!" << std::endl;
            std::cout << "\nVidas: "<< vidas << std::endl;
            std::cout << "\n-----------------------------------\n" << std::endl;
            break;
        }

        std::cout << palavraBorrada << std::endl;
    }
    return 0;
}