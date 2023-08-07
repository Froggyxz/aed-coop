#include <stdio.h>
int main(){
    int  n = 0, soma = 0, contagem = 0;
    do{
        printf("Digite um numero: ");
        scanf("%d", &n);
            if ( n % 2  == 0){
                contagem++;
                soma = soma + n;
        }
    }while (n != -1);
    printf("a soma dos numeros digitados eh %d \n",soma );
    printf("foram digitados %d numeros pares \n",contagem );
    printf("a media eh %2.d",soma/contagem );

    return 0;
}