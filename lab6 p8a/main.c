#include <stdio.h>
#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include <string.h>
#include <malloc.h>
void  sortare(int n,...)
{
int i,j,v[n],aux,k;
va_list va;
    va_start(va,n);
    for(i=0;i<n;i++)
    {
        v[i]=*va_arg(va,int*);


    }
    va_end(va);
    do {
        k=0;
        for(i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1])
            {
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                k=1;
            }
        }
    }while(k==1);

    va_start(va,n);
    for(i=0;i<n;i++)
    {
        *va_arg(va,int*)=v[i];
    }
    va_end(va);
}

int main() {

    int i,j,k,n;
    n=3;
    scanf("%d %d %d",&i,&j,&k);
    sortare(n,&i,&j,&k);
    printf("%d %d %d",i,j,k);
    return 0;
}
