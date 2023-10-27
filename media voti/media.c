#include <stdio.h>
int main()
{
    int voti;
    float voto;
    float total;
    float media;
    total=0;
    int counter;
    counter=0;
    printf("di quanti voti bisogna fare la media?\n");
    scanf("%d",&voti);
    while (counter<voti)
    {
        printf("inserisci voto %d\n",counter+1);
        scanf("%f",&voto);
        if(voto>10)
        {
            printf("voto non valido\n");
        }
        else;
        if(voto<=10)
        {
            total=total+voto;
            counter++;
        }
    }
    media=total/voti;
    printf("la media è:%f\n",media);
}
