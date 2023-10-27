#include <stdio.h>
#include <math.h>
int square(int y);
int main ()
{
    int flag;
    printf ("inserisci numero:  ");
    scanf ("%d",&flag);
    for (int x = 1;x <= flag;++x ) 
    {
        printf ("%d  ",square(x));
    }
    puts ("");
}
int square (int y)
{
    return y * y;
}
 