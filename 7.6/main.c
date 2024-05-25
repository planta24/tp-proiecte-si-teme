#include <stdio.h>
#include <stdlib.h>
typedef struct elem
{
    int n;
    struct elem *urm;
}elem;
elem *nou(int n,elem *urm)
{
    elem *e=NULL;
    if((e=(elem*) malloc(sizeof (elem)))==NULL)
    {
        printf("mem insufi");
        exit(-1);
    }
    e->n=n;
    e->urm=urm;
    return e;
}
elem *adaugareinceput(elem *lista,int n)
{
    return nou(n,lista);
}
void afisare(elem *lista)
{
    for(;lista;lista=lista->urm)
        printf("%d ",lista->n);
    printf("\n");
}
void adaugarenod(elem *p,int n)
{

}
void sortare(elem *lista,int n)
{
    elem *p=lista;
    if(p==NULL)
    {
        p=adaugareinceput(p,n);
    }
    else
    {
        while(lista!=NULL)
        {
            if(n>=p->n)
            {
                lista= adaugarenod(p,n);
            }
            lista=lista->urm;
        }
    }
    lista=p;

}
void eliminare(elem *lista)
{
    elem *p;
    while(lista!=NULL)
    {
        p=lista->urm;
        free(lista);
        lista=p;
    }
}
int main() {

    elem *lista1=NULL;
   lista1= adaugareinceput(lista1,56);
    lista1=adaugareinceput(lista1,5);
    lista1=adaugareinceput(lista1,7);

    afisare(lista1);
    sortare(&lista1,6);
    eliminare(lista1);

    return 0;
}
