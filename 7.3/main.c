#include <stdio.h>
#include <stdlib.h>

typedef struct elem{
    int n;
    struct elem *urm;
}elem;

elem *nou(int n,elem *urm)
{
    elem *e=(elem*)malloc(sizeof(elem));
    if(!e){
        printf("memorie insuficienta");
        exit(EXIT_FAILURE);
    }
    e->n=n;
    e->urm=urm;
    return e;
}

elem *adaugaInceput(elem *lista,int n)
{
    return nou(n,lista);
}


void afisare(elem *lista)
{
    for(;lista;lista=lista->urm){
        printf("%d ",lista->n);
    }
    putchar('\n');
}


void reuniune(elem *lista1,elem *lista2,elem **lista)
{
    *lista=lista1;
    int k=0;
    elem *p=NULL;
    p=lista1;
    while(lista2!=NULL)
    {

        lista1=p;
        k=0;

        while(lista1!=NULL)
        {

            if(lista2->n==lista1->n)
            {
               k=1;
               break;

            }

            lista1=lista1->urm;
        }
        if(k==0)
        {
            *lista=adaugaInceput(*lista,lista2->n);
        }
        lista2=lista2->urm;
    }




}
// elibereaza memoria ocupata de o lista
void eliberare(elem *lista)
{
    elem *p;
    while(lista){
        p=lista->urm;
        free(lista);
        lista=p;
    }
}
int main()
{
    // varianta 1: construieste direct lista dorita
    elem *lista1=nou(108,nou(1,nou(49,NULL)));
    elem *lista=NULL;

    // varianta 2: adauga la inceputul listei elementele in ordinea inversa
    elem *lista2=NULL;
    lista2=adaugaInceput(lista2,32);
    lista2=adaugaInceput(lista2,49);
    lista2=adaugaInceput(lista2,108);

    afisare(lista1);

    afisare(lista2);


   reuniune(lista1,lista2,&lista);
    afisare(lista);

    eliberare(lista1);
    eliberare(lista2);


    return 0;
}
