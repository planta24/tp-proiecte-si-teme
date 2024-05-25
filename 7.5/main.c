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
elem *adaugainceput(elem *lista,int n)
{
    return nou(n,lista);
}
void afisare(elem *lista)
{
    for(;lista;lista=lista->urm)
    {
        printf("%d ",lista->n);
    }
    printf("\n");
}
int comp(elem *lista1,elem *lista2)
{
    elem *p=NULL;
    elem *m=NULL;
    elem *t=NULL;
    int k=0,d=0;
    p=lista2;
    m=lista1;
    t=lista1;
    while(lista1!=NULL)
    {
        lista2=p;
        while(lista2!=NULL)
        {
            if(lista1->n==lista2->n)
            {
                k=1;
                break;
            }
            lista2=lista2->urm;
        }
       if(k==0)
           break;
        lista1=lista1->urm;
    }
    d=k;
    lista1=m;
    lista2=p;
    k=0;
    while(lista2!=NULL)
    {
        lista1=t;
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
            break;
        lista2=lista2->urm;
    }
    if(d==1&&k==1)
        return 1;
    else
        return 0;

}
void eliberare(elem *lista)
{
    elem *p=NULL;
    while(lista!=NULL)
    {
        p=lista->urm;
        free(lista);
        lista=p;
    }
}
int main() {

    elem *lista1=NULL;
    elem *lista2=NULL;
    lista1=adaugainceput(lista1,45);
    lista1=adaugainceput(lista1,4);
    lista1=adaugainceput(lista1,5);
    lista1=adaugainceput(lista1,45);


    lista2=adaugainceput(lista2,45);
    lista2=adaugainceput(lista2,4);
    lista2=adaugainceput(lista2,5);

    afisare(lista1);
    afisare(lista2);
    printf("%d", comp(lista1,lista2));
    eliberare(lista1);
    eliberare(lista2);
    return 0;
}
