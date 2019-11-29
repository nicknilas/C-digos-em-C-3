#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	float P, M;
	float F, C;
	printf("Diga a quantidade de chuva em polegadas para saber em milímetros.\n");
	printf("Diga o número:");
	scanf("%f", &P);
	M = 25.4 * P;
	printf("A quantidade de chuva em milímetros é: %.2f\n",M);	
	
	printf("Dê uma temperatura em Fahrenheit: \n");
	scanf("%f" , &F);
	C = (F-32) * 5/9;
	printf("O resultado da conversão é: %.2f \n", C);
	system("PAUSE");
	return 0; 
	
}
