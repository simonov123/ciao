//calcolo media scuola elementare
#include <stdio.h>
int main ()
{
    int counter;
    int voto;
    int totale;
    int media;

    counter=1;
    totale=0;

    while (counter<=7)
    {
    printf("inserisci voto:  ");
    scanf("%d",&voto);
    totale=totale+voto;
    counter=counter+1;
    }
    media=totale / 7;
    if (media>=6)
    {
        printf("la media é: %d\n",media);
        printf("lo studente è stato ammesso");
    }
    else;
    if (media<6)
    {
        printf("lo studente non è ammesso");
    }
    return 0;
}
    


    
    



}