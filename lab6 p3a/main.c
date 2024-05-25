#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>

void absN(int n,...)
{
    int i;

    va_list va;
    va_start(va,n);
    for(i=0;i<n;i++)
    {
       float *e= va_arg(va, double *);

        *e=fabs(*e);

    }
    va_end(va);

}

int main() {
    float x=-3.5,y=5.5;
    printf("%f %f\n",x,y);
    absN(2,&x,&y);
    printf("%f %f",x,y);
    return 0;
}
