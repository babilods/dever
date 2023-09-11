#include<stdio.h>
main(){

    float nota1 = 10, nota2 = 5, nota3 = 6, mediaPonderada;

    mediaPonderada = (nota1 + nota2 + (nota3 * 2))/4;

    printf("Media do aluno: %.2f",mediaPonderada);

    if(mediaPonderada >= 7){
        printf("Aprovado");
    }else{
        printf("Reprovado");
    }
}