#include <stdio.h>
int main()
{
    FILE *record;
    if ((record=fopen("info.txt","w"))==NULL)
    {
        printf("il file non può essere aperto");
    }
    else;
    {
        char nome[15];
        char cognome[15];
        int numero;
        printf ("inserisci nome,cognome e numero di telefono\n");
        printf ("inserisci CNTRL+Z per terminare il programma\n");
        printf (": ");
        scanf ("%s%s%d\n",nome,cognome,&numero);
        while (!feof(stdin))
        {
            printf ("%14s%14s%d\n",nome,cognome,numero);
            fscanf (record,"%s%s%d\n",nome,cognome,&numero);
        }
        fclose(record);

    }
}