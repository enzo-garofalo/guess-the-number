#include <stdio.h>
#include <iostream>
#include <stdlib.h>

int main(){
    printf("======================================\n");
    printf("=             Bem vindo              =\n"); 
    printf("======================================\n");
    int random_number = rand() % 10 + 1;
    int chute;
    while(chute != random_number){
        std::cout << "Adivinhe o Numero: ";
        std::cin  >> chute;
        printf("--------------------------------------\n");
        if(chute == random_number){
            printf("-           Perfeito, Ganhou!        -\n"); 
            printf("--------------------------------------\n");
        }else{           
            if(chute > random_number){
                printf("-           Chute muito alto         -\n"); 
            }else{
                printf("-           Chute muito baixo        -\n"); 

            }
            printf("--------------------------------------\n");
            tentativas--;
        }
    }
    std::cout << random_number;
}