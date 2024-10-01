#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(){
	int x;
	bool aux = 0;
	printf("Digite o número que deseja verificar se é primo: \n");
	scanf("%d", &x);
	for(int y=sqrt(x); y>1; y--){
		if(x%y==0){
			aux = 1;
			break;
		}
		else if(x==2 || x==3){
			aux = 0;
		}
	}
	if (aux == 0){
		printf("É primo!\n");
	}
	else if(aux == 1){
		printf("Não é primo!\n");
	}

	return 0;
}