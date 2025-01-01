#include <iostream>

using namespace std;

void mostrarMensagem(){
    std::cout << "Hello World, "; // quando nao utilizamos o std::endl ele não quebra a linha  
    std::cout << "How are you?" << std::endl; // com o std ele quebra a lihna 
    std::cout << "i love it to chat\n"; // \n quebra a linha porem nao de modo tao eficiente quando o endl
    std::cout << "Whats up?" << std::endl;
    string bom_dia = "opa";
}

int main(){
    mostrarMensagem();
    system("pause");
    return 0;
}

