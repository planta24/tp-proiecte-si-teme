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

void inversare(elem **lista)
{
    elem *prim=NULL;
    elem *inl=*lista;
    elem *next=NULL;
    while(inl!=NULL)
    {
        next=inl->urm;
        inl->urm=prim;
        prim=inl;
        inl=next;
    }
    *lista=prim;
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
    elem *lista1=nou(108,nou(-1,nou(49,NULL)));


    // varianta 2: adauga la inceputul listei elementele in ordinea inversa
    elem *lista2=NULL;
    lista2=adaugaInceput(lista2,49);
    lista2=adaugaInceput(lista2,-1);
    lista2=adaugaInceput(lista2,108);
    lista2=adaugaInceput(lista2,106);
    afisare(lista1);
    inversare(&lista1);

    afisare(lista1);

    eliberare(lista1);
    eliberare(lista2);


    return 0;
}
