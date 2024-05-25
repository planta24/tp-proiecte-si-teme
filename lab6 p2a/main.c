#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

float *allocVec(int n,...)
{
    float *v;
    int i;
    if((v=(float*)malloc(n*sizeof(float)))==NULL)
    {
        printf("memorie insufi");
        exit(-1);
    }
    va_list va;
    va_start(va,n);
    for(i=0;i<n;i++)
    {
        v[i]= va_arg(va,double);
    }
    va_end(va);


    return v;

}
int main() {
int i,n;
n=3;
float *v= allocVec(n,8.0,0.0,5.0);
    for(i=0;i<n;i++)
        printf("%f ",v[i]);
    free(v);
    return 0;
}
