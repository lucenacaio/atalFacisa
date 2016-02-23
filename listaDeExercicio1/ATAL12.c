#include <stdio.h>
#include <string.h>

int main() {
    /*Declaração das variáveis*/
    char stringNormal[20], stringInvertida[20];
    int contador = 0;
    gets(stringNormal);
    for(int i =  strlen(stringNormal)-1 ; i >=0  ; i--){
        stringInvertida[contador] =  stringNormal[i];
        contador++;
    }
    printf("%s\n%s",stringInvertida, stringNormal);
    return 0;
}
