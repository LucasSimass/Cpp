#include <iostream>
#include <windows.h>

void print(std::string message)
{
    std::cout << message << std::endl;
};
void printNoEndLine(std::string message)
{
    std::cout << message;
};

class Player
{
    private: 
        char* name_;
        int lifes_ = 3;

    public:
       Player(char* name) : name_(name){};

       char wordGuess_;    

        void playerLose()
        {
           if (lifes_ <= 0){
                std::cout << "Player: " << name_ << " lose it!" << std::endl;   
           }
        }
        
        void playerWin()
        const {
            std::cout << "Player: " << name_ << " win it!" << std::endl; 
        }
        
        char* getName() 
        {
            return name_;
        };
        
        char getWordGuess() 
        const {
            return wordGuess_;
        }
        
        int getLifes() 
        const {
            return lifes_;
        }
};

const char* getUserNameFromWindows() {
    char username_buffer[49 + 1];
    DWORD username_len = 49 + 1;

    if (GetUserName(username_buffer, &username_len))
    {  
        return username_buffer;
    } else 
    {
        return "[Name not Found]";
    }
}

int main()
{
    const char* playerName = {getUserNameFromWindows()};
    
    Player player = Player(playerName);

    printNoEndLine("Word Guess: ");
    std::cin >> player.wordGuess_;

    std::cout << "Username: " << player.getName() << std::endl;
    std::cout << "lifes: " << player.getLifes() << std::endl;
    std::cout << "Word Guess: " << player.getWordGuess() << std::endl;

    return 0;
}