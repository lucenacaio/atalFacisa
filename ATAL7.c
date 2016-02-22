#include<stdio.h>

int main() {
	char palavra[100];
	int modificacoes = 0;
	scanf("%s",&palavra);
    for(int i = 0;palavra[i] != 0; ++i){
		if(palavra[i] == 'a'){
			palavra[i] = 'b';
			modificacoes++;
		}
	}
	printf("Nova Palavra = %s\nNumero de modificacoes = %d", palavra,modificacoes);
 	return(0);
}