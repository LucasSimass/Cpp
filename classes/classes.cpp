#include <iostream>

void print(std::string message){
    std::cout << message << std::endl;
}

class Player {

    public:
        bool isRunning = false;
        int health = 100;
        int coins = 0;  
        std::string name;


        void fight(){
            health -= 10;
            coins += 20 ;
            std::cout << "Health: " << health << " Coins: " << coins << std::endl;
        }
    };
    
int main(){
    Player player1;
    player1.name = "lucas";
    player1.fight();
    print(player1.name);
    return 0;
} 