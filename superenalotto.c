#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    srand (time(NULL));
    unsigned int seed;
    int select;
    printf ("generazione giocate superenalotto\n");
    printf ("premi 1 per generare combinazione,premi 2 per uscire\n");
    scanf ("%d",&select);
    if (select==1)
    {
        for (unsigned int x=1;x<=5;++x)
        printf("%5d",1 + (rand()%90));
    }
    else;
    if (select==2)
    {
    }
    return 0;
}