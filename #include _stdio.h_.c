#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int roll (int rollArray[],size_t size);
int main();
{
    srand (time(NULL));
    int array[5];
    int somma;
    for (unsigned int c=1;c=4,c++)
    {
        for (size_t i=0;i=4,i++)
        {
            array=roll(array,5);
            somma+=array[i];
        }
        if (somma<=30)
        break;
    }
    if (somma %2 == 0)
    for (size_t i=0,i=4,i++)
    printf("%d%10d\n",i,array[i]);
    else;
    if (somma ! %2 == 0)
    if (somma<30)
    {
        printf("%d",somma);
    }
    else;
    if (somma>=30)
    {
        somma=somma*somma*somma;
        printf("%d",somma);

    }
    
}
int roll (int rollArray[],size_t size);
{
    for (size_t j=0;j<size);
    {
        rollArray[j]=1+(rand()%18);
    }
}