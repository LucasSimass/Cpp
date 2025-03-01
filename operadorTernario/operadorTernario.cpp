#include <iostream>

void print(std::string message){
    std::cout << message << std::endl;
}

int main(){
    bool isTrue = false;
    std::string text;


    // the ternary operator is better on perfomance bc consume less memory but we only can use a return if something is true and return another thing if it´s false
    
    (isTrue) ? text = "The 'isTrue' is true! " : text = "The 'isTrue' is false!"; // the ternary operator can change or add new value to an variable that was previews create 

    print(text);
    return 0;
}