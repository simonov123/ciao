//banca
#include <stdio.h>
struct record
{
    int id;
    char nome [15];
    char cogn [15];
    char age [10];
    double mon;
};
int modifica(FILE *sptr);
int del(FILE *sptr);
int leggi(FILE *sptr);
int aggiungi(FILE *sptr);
int newdata(FILE *sptr);
int main()
{
    printf("benvenuti nel servizio di gestione bancaria 2000\n");
    FILE *ptr;
    if((ptr=fopen("data.dat","rb"))==NULL)
    {
        printf("nessun database è stato trovato\ncrearne uno nuovo?");
        printf("1)si\n2)no\n:");
        int a;
        scanf("%d",&a);
        if(a==1)
        {
            newdata(ptr);
        }
        else;
        {
            int r=0;
        }
    }
    else;
    {
        printf("MENÙ:\n1)modifica conto\n2)cancella conto\n3)verifica conto\n4)aggiungi conto\n5)esci\n");
        int b;
        scanf("%d",&b);
        while((b=getchar())!=6)
        {
            switch(b)
            {
                case'1':
                {
                    modifica(ptr);
                }
                break;
                case'2':
                {
                    del(ptr);
                }
                break;
                case'3':
                {
                    leggi(ptr);
                }
                break;
                case'4':
                {
                    aggiungi(ptr);
                }
                break;
                case'5':
                {
                    printf("grazie e arrivederci\n");
                    return 0;
                }
                break;
            }
        }
    }
}
int modifica(FILE *sptr)
{
    int idrec;
    printf("inserire numero account:");
    scanf("%d",&idrec);
    if((sptr=fopen("data.dat","rb+"))==NULL)
    {
        printf("database non disponibile\n");
        printf("crearne uno nuovo?\n1)si\n2)no\n");
        int f;
        scanf("%d",&f);
        if(f==1)
        {
            newdata(sptr);
        }
        else;
        if(f==2)
        {
            printf("grzie e arrivederci\n");
            return 0;
        }
    }
    else;
    {
        fseek(sptr,idrec*sizeof(struct record),SEEK_SET);
        struct record vuoto={0,"","","",0.0};
        fread(&vuoto,sizeof(struct record),1,sptr);
        printf("dati attuali:\n");
        printf("id\tnome\tcognome\tnascita\tsaldo\n");
        printf("%d\t%s\t%s\t%s\t%f\n",vuoto.id,vuoto.nome,vuoto.cogn,vuoto.age,vuoto.mon);
        printf("modificare?1)si\n2)no\n");
        int c;
        scanf("%d",&c);
        if(c==1)
        {
            fseek(sptr,idrec*sizeof(struct record),SEEK_SET);
            printf("1)modificare anagrafica\n2)eseguire transazione\n");
            int d;
            scanf("%d",&d);
            if(d==1)
            {
                printf("inserire numero account:");
                scanf("%d",&vuoto.id);
                printf("inserire nome:");
                scanf("%s",vuoto.nome);
                printf("inserire cognome:");
                scanf("%s",vuoto.cogn);
                printf("inserire data di nascita in formato GG/MM/AAAA:");
                scanf("%s",vuoto.age);
                printf("inserire saldo attuale:");
                scanf("%lf",&vuoto.mon);
                printf("elaborazione informazioni...\n");
                fwrite(&vuoto,sizeof(struct record),1,sptr);
                fseek(sptr,idrec*sizeof(struct record),SEEK_SET);
                printf("nuovi dati:\n");
                fread(&vuoto,sizeof(struct record),1,sptr);
                printf("id\tnome\tcognome\tnascita\tsaldo\n");
                printf("%d\t%s\t%s\t%s\t%f\n",vuoto.id,vuoto.nome,vuoto.cogn,vuoto.age,vuoto.mon);
            }
            else;
            if(d==2)
            {
                printf("azioni disponibili:\n1)prelievo\n2)versamento\\n");;
                int e;
                scanf("%d",&e);
                if(e==1)
                {
                    double amm;
                    printf("ammontare del prelievo:");
                    scanf("%lf",&amm);
                    vuoto.mon=vuoto.mon+amm;
                    fseek(sptr,idrec*sizeof(struct record),SEEK_SET);
                    fwrite(&vuoto,sizeof(struct record),1,sptr);
                    printf("nuovi dati:\n");
                    fseek(sptr,idrec*sizeof(struct record),SEEK_SET);
                    fread(&vuoto,sizeof(struct record),1,sptr);
                }
                else;
                if(e==2)
                {
                    double ver;
                    printf("ammontare del versamento:");
                    scanf("%lf",&ver);
                    vuoto.mon=vuoto.mon-ver;
                    fseek(sptr,idrec*sizeof(struct record),SEEK_SET);
                    fwrite(&vuoto,sizeof(struct record),1,sptr);
                    printf("nuovi dati:\n");
                    fseek(sptr,idrec*sizeof(struct record),SEEK_SET);
                    fread(&vuoto,sizeof(struct record),1,sptr);
                }
            }
        }
        printf("grazie e arriverderci\n");
        fclose(sptr);
    }
    printf("MENÙ:\n1)modifica conto\n2)cancella conto\n3)verifica conto\n4)aggiungi conto\n5)esci\n");
    int u;
    scanf("%d",&u);
    while((u=getchar())!=6)
    {
        switch(u)
        {
            case'1':
            {
                modifica(sptr);
            }
            break;
            case'2':
            {
                del(sptr);
            }
            break;
            case'3':
            {
                leggi(sptr);
            }
            break;
            case'4':
            {
                aggiungi(sptr);
            }
            break;
            case'5':
            {
                printf("grazie e arrivederci\n");
                return 0;
            }
            break;
        }
    }
}
int del(FILE *sptr)
{
    int delrec;
    printf("inserire numero account:");
    scanf("%d",&delrec);
    if((sptr=fopen("data.dat","rb+"))==NULL)
    {
        printf("database non disponibile\n");
        printf("crearne uno nuovo?\n1)si\n2)no\n");
        int g;
        scanf("%d",&g);
        if(g==1)
        {
            newdata(sptr);
        }
        else;
        if(g==2)
        {
            printf("grzie e arrivederci\n");
            return 0;
        }
    }
    else;
    {
        struct record vuoto={0,"","","",0.0};
        fseek(sptr,delrec*sizeof(struct record),SEEK_SET);
        fread(&vuoto,sizeof(struct record),1,sptr);
        printf("dati attuali:\n");
        printf("id\tnome\tcognome\tnascita\tsaldo\n");
        printf("%d\t%s\t%s\t%s\t%f\n",vuoto.id,vuoto.nome,vuoto.cogn,vuoto.age,vuoto.mon);
        printf("eliminare i dati?\n1)si\n2)no\n");
        int l;
        scanf("%d",&l);
        if(l==1)
        {
            struct record vuoto={0,"","","",0.0};
            fseek(sptr,delrec*sizeof(struct record),SEEK_SET);
            fwrite(&vuoto,sizeof(struct record),1,sptr);
            printf("dati eliminati.");
        }
        else;
        if(l==2)
        {
            return 0;
        }
        fclose(sptr);
    }
    printf("MENÙ:\n1)modifica conto\n2)cancella conto\n3)verifica conto\n4)aggiungi conto\n5)esci\n");
    int t;
    scanf("%d",&t);
    while((t=getchar())!=6)
    {
        switch(t)
        {
            case'1':
            {
                modifica(sptr);
            }
            break;
            case'2':
            {
                del(sptr);
            }
            break;
            case'3':
            {
                leggi(sptr);
            }
            break;
            case'4':
            {
                aggiungi(sptr);
            }
            break;
            case'5':
            {
                printf("grazie e arrivederci\n");
                return 0;
            }
            break;
        }
    }
}
int leggi(FILE *sptr)
{
    int rdrec;
    printf("inserire numero account:\n");
    scanf("%d",&rdrec);
    if((sptr=fopen("data.dat","rb"))==NULL)
    {
        printf("database non disponibile\n");
        printf("crearne uno nuovo?\n1)si\n2)no\n");
        int h;
        scanf("%d",&h);
        if(h==1)
        {
            newdata(sptr);
        }
        else;
        if(h==2)
        {
            printf("grzie e arrivederci\n");
            return 0;
        }
    }
    else;
    {
        struct record vuoto={0,"","","",0.0};
        fseek(sptr,rdrec*sizeof(struct record),SEEK_SET);
        printf("id\tnome\tcognome\tnascita\tsaldo\n");
        fread(&vuoto,sizeof(struct record),1,sptr);
        printf("%d\t%s\t%s\t%s\t%f\n",vuoto.id,vuoto.nome,vuoto.cogn,vuoto.age,vuoto.mon);
        fclose(sptr);
    }
    printf("MENÙ:\n1)modifica conto\n2)cancella conto\n3)verifica conto\n4)aggiungi conto\n5)esci\n");
    int y;
    scanf("%d",&y);
    while((y=getchar())!=6)
    {
        switch(y)
        {
            case'1':
            {
                modifica(sptr);
            }
            break;
            case'2':
            {
                del(sptr);
            }
            break;
            case'3':
            {
                leggi(sptr);
            }
            break;
            case'4':
            {
                aggiungi(sptr);
            }
            break;
            case'5':
            {
                printf("grazie e arrivederci\n");
                return 0;
            }
            break;
        }
    }
}
int aggiungi(FILE *sptr)
{
    int newid;
    printf("inserire nuovo id account:");
    scanf("%d",&newid);
    if((sptr=fopen("data.dat","rb+"))==NULL)
    {
        printf("database non disponibile\n");
        printf("crearne uno nuovo?\n1)si\n2)no\n");
        int m;
        scanf("%d",&m);
        if(m==1)
        {
            newdata(sptr);
        }
        else;
        if(m==2)
        {
            printf("grzie e arrivederci\n");
            return 0;
        }
    }
    else;
    {
        struct record vuoto={0,"","","",0.0};
        fseek(sptr,newid*sizeof(struct record),SEEK_SET);
        fread(&vuoto,sizeof(struct record),1,sptr);
        while(vuoto.id==newid)
        {
            printf("id account già in uso,sceglierne un'altro\n");
            printf("id:");
            scanf("%d",&newid);
            fseek(sptr,newid*sizeof(struct record),SEEK_SET);
            fread(&vuoto,sizeof(struct record),1,sptr);
        }
        vuoto.id=newid;
        printf("inserire nome:");
        scanf("%s",vuoto.nome);
        printf("inserire cognome:");
        scanf("%s",vuoto.cogn);
        printf("inserire data di nascita in formato GG/MM/AAAA:");
        scanf("%s",vuoto.age);
        printf("inserire saldo attuale:");
        scanf("%lf",&vuoto.mon);
        printf("elaborazione informazioni...\n");
        fseek(sptr,newid*sizeof(struct record),SEEK_SET);
        fwrite(&vuoto,sizeof(struct record),1,sptr);
        printf("dati immessi:\n");
        fseek(sptr,newid*sizeof(struct record),SEEK_SET);
        fread(&vuoto,sizeof(struct record),1,sptr);
        printf("id\tnome\tcognome\tnascita\tsaldo\n");
        printf("%d\t%s\t%s\t%s\t%f\n",vuoto.id,vuoto.nome,vuoto.cogn,vuoto.age,vuoto.mon);
        fclose(sptr);
    }   
    printf("MENÙ:\n1)modifica conto\n2)cancella conto\n3)verifica conto\n4)aggiungi conto\n5)esci\n");
    int w;
    scanf("%d",&w);
    while((w=getchar())!=6)
    {
        switch(w)
        {
            case'1':
            {
                modifica(sptr);
            }
            break;
            case'2':
            {
                del(sptr);
            }
            break;
            case'3':
            {
                leggi(sptr);
            }
            break;
            case'4':
            {
                aggiungi(sptr);
            }
            break;
            case'5':
            {
                printf("grazie e arrivederci\n");
                return 0;
            }
            break;
        }
    }
}
int newdata(FILE *sptr)
{
    printf("creazione database...\n");
    if((sptr=fopen("data.dat","wb"))==NULL)
    {
        printf("impossibile creare database\n");
        return 0;
    }
    else;
    {
        struct record vuoto={0,"","","",0.0};
        for(unsigned int i=0;i<350000;i++)
        {
            fseek(sptr,i*sizeof(struct record),SEEK_SET);
            fwrite(&vuoto,sizeof(struct record),1,sptr);
        }
        fclose(sptr);
    }
    printf("MENÙ:\n1)modifica conto\n2)cancella conto\n3)verifica conto\n4)aggiungi conto\n5)esci\n");
    int k;
    scanf("%d",&k);
    while((k=getchar())!=6)
    {
        switch(k)
        {
            case'1':
            {
                modifica(sptr);
            }
            break;
            case'2':
            {
                del(sptr);
            }
            break;
            case'3':
            {
                leggi(sptr);
            }
            break;
            case'4':
            {
                aggiungi(sptr);
            }
            break;
            case'5':
            {
                printf("grazie e arrivederci\n");
                return 0;
            }
            break;
        }
    }
}