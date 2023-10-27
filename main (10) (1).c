#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
int main()
{
    FILE *ptr;
    printf("visualizzatore data users\n");
    reorder(ptr);
}
int reorder(FILE *sptr)
{
    //copia file nell'array
    if((sptr=fopen("data.dat","rb+"))==NULL)
    {
        printf("no data");
    }
    else;
    {
        struct record deck[350000],blank={"",0,0,"",0,""};
        int i;
		for(i=0;i<350000;i++)
        {
            fread(&blank,sizeof(struct record),1,sptr);
            deck[i]=blank;
        }
//riordina array
        while(verifica(deck,350000)==0)
        {
            int j;
			for(j=0;j<350000;j++)
            {
                if(deck[j].age>deck[j+1].age)
                {
                    swap(deck[j],deck[j+1]);
                }
            }
        }
 //stampa array ordinato          
        print(deck,350000);
        fclose(sptr);
    }
}
int swap(struct record one,struct record two)
{
    struct record local;
    local=one;
    one=two;
    two=local;
}
int verifica(struct record array[],size_t size)
{
    int k;
	for(k=0;k<size;k++)
    {
        if(array[k].age<=array[k+1].age)
        {
            return 0;
        }
        else;
        if(array[k].age>array[k+1].age)
        {
            continue;
        }
    }
    return 1;
}
int print(struct record arrayp[],size_t sizep)
{

    int u;
	for(u=0;u<sizep;u++)
    {
        printf("%s\t%ld\t%u\t%s\t%ld\t%s\n",arrayp[u].fullname,arrayp[u].id,arrayp[u].age,arrayp[u].sex,arrayp[u].wiews,arrayp[u].occu);
    }
}