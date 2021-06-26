#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Digite um numero:\n");
    scanf("%d", &num);
    if( num == 5){
        printf("O numero e igual a 5. \n");
    }else{
        if(num > 5){
            printf("O numero e maior que 5, que e %d \n", num);
        }else{
            printf("O numero e menor que 5, que e %d \n", num);
        }
    }

}
