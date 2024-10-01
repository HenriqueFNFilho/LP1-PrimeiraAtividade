#include<stdio.h>

int main(){
	int numeros[5];
	int soma=0;

	for(int i=0; i<5; i++){
		printf("Digite um número:  ");
		scanf("%d", &numeros[i]);
		soma = soma+numeros[i];
	}
	printf("A soma dos cinco números é: %d\n", soma);


	return 0;
}