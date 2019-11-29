#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)

{
	setlocale(LC_ALL, "Portuguese_Brazil");
	float F, C;
	printf("Dê uma temperatura em Fahrenheit: \n");
	scanf("%f" , &F);
	C = (F-32) * 5/9;
	printf("O resultado da conversão é: %.2f \n", C);
	system("PAUSE");
	return 0; 
}
