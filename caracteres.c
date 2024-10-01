#include<stdio.h>

int main(){
	char palavra[100];
	int count = 0;

	printf("Digite as palavras: \n");
	fgets(palavra, sizeof(palavra), stdin);

	while(palavra[count]!='\0'){
		count++;
	}

	printf("A palavra tem: %d caracteres\n", count-1);


	return 0;
}