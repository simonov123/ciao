#ifndef HEAD
#define HEAD
struct record
{
    char fullname[25];
    long int id;
    unsigned int age;
    char sex[2];
    long int wiews;
    char occu[15];
};
int reorder(FILE *ptr);
int print(struct record arrayp[],size_t sizep);
int swap(struct record one,struct record two);
int verifica(struct record array[],size_t size);
#endif

