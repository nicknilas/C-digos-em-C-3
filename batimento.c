#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	int num, r;
	printf("O coração de uma pessoa bate em média uma vez por segundo.\n");
	printf("Digite um número equivalente aos anos de vida para os batimentos: ");
	scanf("%d", &num);
	r=(31536000*num);
	printf("O coração bateu %d por seguundos\n",r);
	system("PAUSE");
	return 0;
	
	
}
