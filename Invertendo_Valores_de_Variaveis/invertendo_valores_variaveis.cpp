#include <iostream>

int invertValue(int n1){
    return -n1; // invert the output value number 
};

int main(){
    int x; 

    std::cout << "Send a value that we will invert the value!" << std::endl;
   
    std::cout << "Put value here: ";
    std::cin >> x;
    std::cout << invertValue(x) << std::endl;
    
    //if statetment in cpp, is the same as JS
    if (x < 0) {
        std::cout << "The value now is negative" << std::endl;
    } else {
        std::cout << "The value now is positive" << std::endl;
    }

    system("Pause");
    return 1;
}

