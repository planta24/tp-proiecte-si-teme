#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
void err(int c, const char *fmt,...)
{
    if(c) {
        va_list va;
        va_start(va, fmt);
        fprintf(stderr, "eroare: ");
        vfprintf(stderr, fmt, va);
        va_end(va);
        fputc('\n', stderr);
        exit(EXIT_FAILURE);
    }
}
int main()
{
    int i,n;
    float x,y,e,min,max;
    printf("n=");scanf("%d",&n);
   err(n<=0||n>100,"n invalid: %d\n",n);
    printf("x=");scanf("%g",&x);
    printf("y=");scanf("%g",&y);
  err(x>=y,"x=%g nu este mai mic decat y=%g\n",x,y);
    max=x;
    min=y;
    for(i=0;i<n;i++){
        printf("e=");scanf("%g",&e);
     err(e<x||e>y,"element invalid: %g\n",e);
        if(e<min)min=e;
        if(e>max)max=e;
    }
    printf("min: %g, max: %g\n",min,max);
    return 0;
}