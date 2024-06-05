#include <stdio.h>

int main(void){
    double nota1, nota2, nota3, nota4, notaRec, media, mediaFinal;

    scanf("%lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4);

    media = (nota1*2 + nota2*3 + nota3*4 + nota4*1)/10;

    printf("Media: %.1f\n", media);

    if(media >= 7.0){
        printf("Aluno aprovado.\n");
    }else if(media < 5.0){
        printf("Aluno reprovado.\n");
    }else if(media >= 5.0 && media < 7.0){
        printf("Aluno em exame.\n");
        scanf("%lf", &notaRec);
        mediaFinal = (media+notaRec)/2;
        printf("Nota do exame: %.1lf\n", notaRec);
        if(mediaFinal > 5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", mediaFinal);
        }else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", mediaFinal);
        }
    }

    return 0;
}