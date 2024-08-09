#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

int gerar_num(){
	int num = 0;
	srand ( time(NULL) );
	num = rand() % 1000 + 1;
	return num;	  
}				  
				  
int main() {
	bool acertou = false;	  
	int chute, tentativas;
	//int valores[10];
	std::vector<int> valores(10);
	int index = 0;
	int num = 0;
	num = gerar_num();
	tentativas = 10;
				  
	printf("\n=============================");
	printf("\n=         Bem vindo         =");
	printf("\n=============================\n");
	
	while (tentativas > 0)
	{
		std::cout << "Numeros tentados: ";
		for(int i = 0; i <= (10-tentativas); i++){
			std::cout << valores[i] << " | ";
		}
		std::cout << "\nDigite um Numero: ";
		std::cin >> chute;
		printf("-------------------------------------------------");
		if (chute == num)
		{
			acertou = true;
			tentativas = 0;
			printf("\n=============================");
			printf("\n=          Acertou!         =");
			printf("\n=============================");
		}
		else
		{
			tentativas--;
			valores[index] = chute;
			index++;
			if(chute > num)
			{
				std::cout << "\nO numero eh menor que " << chute;
			}
			else
			{
				std::cout << "\nO numero eh maior que " << chute;
			}
			std::cout << "\nVoce tem " << tentativas << " tentativas"<<std::endl;
			printf("-------------------------------------------------\n");
		}
		if(tentativas == 0 && acertou == false){
			std::cout << "\nO numero eh igual a " << num;
		}
		
	}
	return 0;
}