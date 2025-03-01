#include <iostream>

int main(){
    int count = 0;
    while (count < 100){
        count++;
        std::cout << count << std::endl;
        if (count >= 50){
            break;
        }
    }

    return 0;
}