#include <stdio.h>
#include <stdlib.h>
struct nodalb
{
    int data;
    struct nodalb *dx;
    struct nodalb *sx;
};
int insert(struct nodalb *root,int value);
int read(struct nodalb *root);
int main()
{
    struct nodalb *rad=NULL;
    printf("1)write\t2)read\n");
    int sc;
    int val;
    scanf("%d",&sc);
    while((sc=getchar())!=EOF)
    {
        switch(sc)
        {
            case'1':
            {
                printf("inserire valore\n");
                scanf("%d",&val);
                insert(rad,val);
            }
            break;
            case'2':
            {
                read(rad);
            }
            break;
        }
    }
    return 0;
}
int insert(struct nodalb *root,int value)
{
    if(root==NULL)
    {
        root=malloc(sizeof(struct nodalb));
        root->data=value;
        root->dx=NULL;
        root->sx=NULL;
        printf("\a");
    }
    else;
    if(value>root->data)
    {
        insert((&(root)->dx),value);
        printf("\a");
    }
    else;
    if(value<root->data)
    {
        insert((&(root)->sx),value);
    }
    return value;
}
int read(struct nodalb *root)
{
    if(root==NULL)
    {
        printf("albero vuoto\n");
    }
    else;
    if(root!=NULL)
    {
        printf("%d\n",root->data);
        read(root->sx);
        read(root->dx);
    }
}

