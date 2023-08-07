#include <stdio.h>
int main(){
    int  voto=0, nulo=0, branco=0, contagem=0;
    double cand1=0, cand2=0, cand3=0, cand4=0;
    float porcento1=0, porcento2=0, porcento3=0, porcento4=0;
    do{
        printf("Digite seu voto: ");
        scanf("%d", &voto);
        switch (voto)
        {
        case 5:
            cand1++;
            contagem++;
            break;
        case 15:
            cand2++;
            contagem++;
            break;
        case 20:
            cand3++;
            contagem++;
            break;
        case 25:
            cand4++;
            contagem++;
            break;
        case 30:
            branco++;
            break;
        default:
            if (voto !=0){
                nulo++;
            }
            break;
        }
    }while (voto != 0);
    porcento1 = cand1 / contagem * 100.0;
    porcento2 = cand2 / contagem * 100.0;
    porcento3 = cand3 / contagem * 100.0;
    porcento4 = cand4 / contagem * 100.0;

    printf("o candidato 1 teve %3.f votos \n",cand1 );
    printf("com a porcentagem de votos validos de %f %% \n", porcento1);
    printf("o candidato 2 teve %3.f votos \n",cand2 );
    printf("com a porcentagem de votos validos de %f \n", porcento2);
    printf("o candidato 3 teve %3.f votos \n",cand3 );
    printf("com a porcentagem de votos validos de %f %% \n", porcento3);
    printf("o candidato 4 teve %3.f votos \n",cand4 );
    printf("com a porcentagem de votos validos de %f %% \n", porcento4);
    printf("o numero de votos nulos foi %d \n",nulo );
    printf("o numero de votos em branco foi %d \n",branco );

}