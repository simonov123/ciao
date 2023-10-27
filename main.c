//file ad accesso sequenziale
#include<stdio.h>
void open(FILE *sptr);
void read(FILE *sptr);
int main()
{
    FILE *ptr;
    int news;
    printf("creare nuovo file?\n1)si\t2)no\n\a");
    scanf("%d",&news);
    while(news==1)
    {
        if((ptr=fopen("nuovo.txt","w"))==NULL)
        {
            printf("errore");
            return 0;
        }
        else;
        {
            printf("nuovo:\n");
            char word[25];
            scanf("%s",word);
            while(!feof(stdin))
            {
                fprintf(ptr,"%s",word);
                scanf("%s",word);
            }
            fclose(ptr);
        }
        printf("creare nuovo file?1)si\t2)no\n");
        scanf("%d",&news);
    }   
    printf("MENÙ\n1)aggiornare file\n2)leggere file\n3)esci\nseleziona:");
    int s1;
    while((s1=getchar())!=EOF)
    {
        switch(s1)
        {
            break;
            case '1':
            {
                printf("apertura file in corso...\n");
                open(ptr);
            }
            break;
            case '2':
            {
                printf("apertura file in corso...\n");
                read(ptr);
            }
            break;
            case '3':
            {
                return 0;
            }
        }
    }
}
void open(FILE *sptr)
{
    if((sptr=fopen("nuovo.txt","r+"))==NULL)
    {
        printf("errore\n");
    }
    else;
    {
        char word[25];
        scanf("%s",word);
        while(!feof(stdin))
        {
            fprintf(sptr,"%s",word);
            scanf("%s",word);
        }
        fclose(sptr);
    }
}
void read(FILE *sptr)
{
    if((sptr=fopen("nuovo.txt","r"))==NULL)
    {
        printf("errore\n");
    }
    else;
    {
        char word[25];
        while(!feof(sptr))
        {
            fscanf(sptr,"%s",word);
            printf("%s",word);
        }
        fclose(sptr);
    }
}