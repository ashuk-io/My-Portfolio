#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int player, computer;
    
    /*
    0 -> rock
    1 -> paper
    2 -> scizzors
    */
   printf("Choose 0 for rock, 1 for paper, 2 for scizzors : \n");
    scanf("%d", &player);
    
    srand(time(0));// Initialize random number generator
    
    computer = (rand() % 3);// Generate random number between 0 and 2
                //
    if(player == 0 && computer == 2){
        printf("Player Wins!\n");
    }
    else if(player == 1 && computer == 0){
        printf("Player Wins!\n");
    }
    else if(player == 2 && computer == 1){
        printf("Player Wins!\n");
    }
    else if(player == 0 && computer == 2){
        printf("Player Wins!\n");
    }
    else if(player == computer){
        printf("Draw!\n");
    }
    else{
        printf("The computer wins\n");
    }
               //
    
    if(player == 0){
        char guess[10] = "Rock";
        printf("Player   : %s\n", guess);  
    }
    else if(player == 1){
        char guess[10] = "Paper";
        printf("Player   : %s\n", guess);
    }
    else{
        char guess[10] = "Scizzors";
        printf("Player   : %s\n", guess);
    }
               //
    
    if(computer == 0){
        char random[10] = "Rock";
        printf("Computer : %s\n", random);
    }
    else if(computer == 1){
        char random[10] = "Paper";
        printf("Computer : %s\n", random);
    }
    else{
        char random[10]= "Scizzors";
        printf("Computer : %s\n", random);
    }

     

    return 0;
}