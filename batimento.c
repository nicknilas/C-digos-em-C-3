#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	int num, r;
	printf("O cora��o de uma pessoa bate em m�dia uma vez por segundo.\n");
	printf("Digite um n�mero equivalente aos anos de vida para os batimentos: ");
	scanf("%d", &num);
	r=(31536000*num);
	printf("O cora��o bateu %d por seguundos\n",r);
	system("PAUSE");
	return 0;
	
	
}
