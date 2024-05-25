#include <stdio.h>
#include <malloc.h>

typedef struct elem {
    int n;
    struct elem *urm;
}elem;
elem *nou(int n,elem *urm)
{
    elem *e=(elem*)malloc(sizeof (elem));
    if(!e)
    {
        printf("mom ins");
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
elem *stergereelement(elem *lista,int n)
{
    elem *prev=NULL;
    elem *p=NULL;
    if(lista==NULL)
        return lista;
    if(lista->n==n)
    {
        p=lista;
        lista=lista->urm;
        free(p);
    }
    else
        for(prev=lista,p=lista->urm;p!=NULL;prev=prev->urm,p=p->urm)
            if(p->n==n) {
                prev->urm = p->urm;
                free(p);
                break;
            }
return lista;
}
void eliberare(elem *lista)
{
    elem *p;
    while(lista)
    {
        p=lista->urm;
        free(lista);
        lista=p;
    }
}
int main() {

    elem *lista1=NULL;
    elem *lista2=NULL;
    lista1= adaugainceput(lista1,12);
    lista1= adaugainceput(lista1,-1);
    lista1= adaugainceput(lista1,78);
    afisare(lista1);
    lista1=stergereelement(lista1,-1);
    afisare(lista1);
    eliberare(lista1);

    return 0;
}
