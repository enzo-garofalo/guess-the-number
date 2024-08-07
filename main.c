#include <stdio.h>
#include <iostream>

int main(){
    printf("======================================\n");
    printf("=             Bem vindo              =\n");
    printf("======================================\n");
    
    int tentativas = 3;
    while(tentativas > 0){
        std::cout << "Adivinhe o Número: ";
        tentativas--;
    }
}