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

int comparare(elem *lista1,elem *lista2)
{
    while(lista1!=NULL&&lista2!=NULL)
    {
        if(lista1->n!=lista2->n)
            return 0;
        lista1=lista1->urm;
        lista2=lista2->urm;
    }
    if(lista1!=NULL||lista2!=NULL)
        return 0;
    return 1;
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
    afisare(lista1);

    // varianta 2: adauga la inceputul listei elementele in ordinea inversa
    elem *lista2=NULL;
    lista2=adaugaInceput(lista2,49);
    lista2=adaugaInceput(lista2,-1);
    lista2=adaugaInceput(lista2,108);
    lista2=adaugaInceput(lista2,108);
    afisare(lista2);
    printf("%d\n",comparare(lista1,lista2));
    eliberare(lista1);
    eliberare(lista2);


    return 0;
}
