//gol fantacalcio
#include <stdio.h>

int main ()
{
    int counter;
    float voto;
    float totale;

    counter=1;
    totale=0;

    while ( counter<=11 )
    {
        printf ("inserisci voto:  ");
        scanf  ("%f", &voto );
        totale=totale+voto;
        counter=counter+1;
    }
if (totale<106&totale>=102)
printf(" 10 gol ");
else;
if (totale<102&totale>=98)
printf(" 9 gol ");
else;
if (totale<98&totale>=94)
printf(" 8 gol");
else;
if (totale<94&totale>=90)
printf(" 7 gol");
else;
if (totale<90&totale>=86)
printf(" 6 gol");
else;
if (totale<86&totale>=82)
printf(" 5 gol");
else;
if (totale<82&totale>=78)
printf(" 4 gol");
else;
if (totale<78&totale>=74)
printf(" 3 gol");
else;
if (totale<74&totale>=70)
printf(" 2 gol");
else;
if (totale<70&totale>=66)
printf(" 1 gol");
else;
if (totale<=65)
printf(" 0 gol");
    }
 
    

