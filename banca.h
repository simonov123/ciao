#ifndef LIBRARY
#define LIBRARY
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
#endif
