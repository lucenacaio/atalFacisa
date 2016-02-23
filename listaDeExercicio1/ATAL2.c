#include<stdio.h>
int soma(int x, int y){
	return(x + y);
}
int main(){
	int total = soma(10,20);
	printf("%d", total);
	return(0);
}