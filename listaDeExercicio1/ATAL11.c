#include <stdio.h>

int main() {
    int num;
    printf("Digite um número:\n");
    scanf("%d",&num);
    switch (num) {
        case 1:
            printf("%d - Domingo",num);
            break;
        case 2:
            printf("%d - Segunda",num);
            break;
        case 3:
            printf("%d - Terca", num);
            break;
        case 4:
            printf("%d - Quarta", num);
            break;
        case 5:
            printf("%d - Quinta",num);
            break;
        case 6:
            printf("%d - Sexta",num);
            break;
        case 7:
            printf("%d - Sabado",num);
            break;
        default:
            printf("Dia invalido");
            break;
    }
    return 0;
}
