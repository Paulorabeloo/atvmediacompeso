#include <stdio.h>
int main(){
    double A, B, media;
    printf("Digite a primeira nota:\n");
    scanf("%lf", &A);
    printf("Digite a segunda nota:\n");
    scanf("%lf", &B);
    A = A * 3.5;
    B = B * 7.5;
    media = (A + B) / 11;
    printf("A media do aluno é: %lf", media);
return 0;
}
