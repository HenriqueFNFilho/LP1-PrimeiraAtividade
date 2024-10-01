#include<stdio.h>

int main()
{
	int x;
	printf("Escreva o fatorial que deseja o resultado: \n");
	scanf("%d", &x);
	for(int y=x-1; y>=1; y--){
		x=x*y;
	}
	printf("Seu fatorial serah: %d \n", x);
	return 0;
}