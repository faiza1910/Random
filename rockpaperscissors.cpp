#include <iostream>
#include <ctime>
char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);


int main(){
    char player;
    char computer;
    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);
    
    computer = getComputerChoice();
    std :: cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player,computer);
    return 0;
}

char getUserChoice(){
    char player;
    std::cout << "Rock-Paper-Scissors Game! \n";
    do{

        std::cout << "Choose One of the following! \n";
        std::cout << "'R' for Rock\n";
        std::cout << "'P' for Paper\n";
        std::cout << "'S' for Scissors\n";
        std::cin >> player;
    
    }while(player != 'r' && player != 'p' && player != 's' && player != 'R' && player != 'P' && player != 'S');

    return player;

}
char getComputerChoice(){
    srand(time(0));
    int num = rand()%3+1;
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;

}
void showChoice(char choice){
    switch(choice){
        case 'r' : std::cout <<"Rock\n";
            break;
        case 'R' : std::cout <<"Rock\n";
            break;
        case 'p': std::cout <<"Paper\n";
            break;
        case 'P': std::cout <<"Paper\n";
            break;  
        case 's': std::cout <<"Scissors\n";
            break;
        case 'S': std::cout <<"Scissors\n";
            break;   
    }

}
void chooseWinner(char player, char computer){
    switch(player){
        case 'r':  if(computer =='r'){
                        std::cout<< "It's a tie\n";
                    }
                    else if (computer =='p'){
                        std::cout <<"Player loses!\n";
                    }
                    else{
                        std::cout<< "Player wins";
                    }
                    break;
        case 'p':  if(computer =='p'){
                        std::cout<< "It's a tie\n";
                    }
                    else if (computer =='s'){
                        std::cout <<"Player loses!\n";
                    }
                    else{
                        std::cout<< "Player wins";
                    }
                    break;
        case 's':  if(computer =='s'){
                        std::cout<< "It's a tie\n";
                    }
                    else if (computer =='r'){
                        std::cout <<"Player loses!\n";
                    }
                    else{
                        std::cout<< "Player wins";
                    }
                    break;
    }
}