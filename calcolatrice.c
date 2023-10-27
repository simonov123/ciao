#include <stdio.h>
#include <math.h>
float maximum(float x, float y, float z);
int main ()
{
    float no1;
    float no2;
    float no3;
    float var1;
    float var2;
    float var3;
    float var4;
    float num1;
    float num2;
    float num3;
    int ch;
printf("calcolatrice\n premi 1 per addizione\n premi 2 per sottrazione\n premi 3 per moltiplicazione\n premi 4 per divisione\n premi 5 per radice quadrata\n premi 6 per massimo tra 3 numeri\n premi 7 per potenza\n");
    while ((ch = getchar())  !=EOF)
    {
        switch (ch)
        {
        case '1':
           { printf ("inserisci il primo numero  ");
             scanf ("%f",&num1);
             printf ("inserisci il secondo numero  ");
             scanf ("%f",&num2);
             var1=num1+num2;
             printf ("la somma è:   %f",var1);
           }
            break;
        case '2':
            {
                printf ("inserisci il primo numero  ");
                scanf  ("%f",&num1);
                printf ("inserisci il secondo numero  ");
                scanf  ("%f",&num2);
                var2=num1-num2;
                printf ("la differenza è:   %f",var2);
            }
            break;
        case '3':
            {
                printf ("inserisci il primo numero  ");
                scanf  ("%f",&num1);
                printf ("inserisci il secondo numero  ");
                scanf  ("%f",&num2);
                var3=num1*num2;
                printf ("il prodotto è:   %f",var3);
            }
            break;
        case '4':
            {
                printf ("inserisci il primo numero  ");
                scanf  ("%f",&num1);
                printf ("inserisci il secondo numero  ");
                scanf  ("%f",&num2);
                var4=num1/num2;
                printf ("il risultato è:   %f",var4);


            }
            break;
        case '5':
            {
                printf ("inserire numero:  ");
                scanf ("%f",&num3);
                printf ("il risultato è:\n");
                printf ("%f", sqrt(num3));
                
            }
            break;
        case '6':
            {
             printf ("inserisci 3 numeri\n");
             scanf ("%f%f%f",&no1,&no2,&no3);
             printf("Maximum is: %f\n", maximum(no1, no2, no3));
            }
            break;
        case '7':
            {
             float f1,f2;
             printf ("inserisci due numeri:\n");
             scanf ("%f",&f1);
             printf ("inserisci secondo numero:\n");
             scanf ("%f",&f2);
             printf ("il risultato è:  ");
             printf ("%f",pow(f1,f2));
            }
        }
    }
    return 0;
}
float maximum(float x, float y, float z)
{
    float max = x;
    if (y>max);
    max=y;
    if (z>max);
    max=z;
    return max;
}
