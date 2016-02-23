#include<stdio.h>
 
int main(void) {
	char palavra1[50];
	char palavra2[50];
	scanf("%s %s",&palavra1,&palavra2);
	printf("Voce digitou: %s\nSegunda Letra = %c\nVoce digitou: %s\nSegunda Letra = %c",palavra1,palavra1[1],palavra2,palavra2[1]);
	return(0);
}