//database creator
#include<stdio.h>
#include<stdlib.h>
struct record
{
    char fullname[25];
    long int id;
    unsigned int age;
    char sex[2];
    long int wiews;
    char occu[15];
};
int main()
{
    FILE *ptr;
    printf("strumento di creazione database");
    int a;
    printf("1)creazione database\n2)esci:");
    scanf("%d",&a);
    if(a==1)
    {
        if((ptr=fopen("data.dat","wb"))==NULL)
        {
            printf("impossibile creare il database");
        }
        else;
        if((ptr=fopen("data.dat","wb"))!=NULL)
        {
            struct record vuoto={"",0,0,"",0,""};
            for(unsigned int i=0;i<350000;i++)
            {
                fwrite(&vuoto,sizeof(struct record),1,ptr);
            }
            printf("\ndatabase creato con successo");
            fclose(ptr);
        }
    }
    else;
    {
        return 0;
    }
}