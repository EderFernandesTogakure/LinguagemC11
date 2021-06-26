#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota1, nota2, media;
    printf("Digite a primeira nota do aluno\n");
    scanf("%d", &nota1);

    printf("Digite a segunda nota do aluno \n");
    scanf("%d", &nota2);

    media = (nota1 + nota2)/2;

    if(media >= 5){
        if(media >= 7){
            printf("Aluno aprovado, a nota e %d \n", media);
        }else{
            printf("Aluno em exame, a nota e %d \n", media);
        }
    }else{
        printf("Aluno reprovado, a nota e %d \n", media);
    }

}
