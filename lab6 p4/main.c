#include <stdio.h>
#include <stdarg.h>
#include <math.h>

int crescator(int n,char tip,...)
{
    int i;
    va_list va;
    va_start(va,tip);
    if(tip=='d')
    {
        int m= va_arg(va,int);
        for(i=0;i<n-1;i++)
        {
            int e= va_arg(va,int);
            if(e>m)
            {
                m=e;
            }
            else
            {
                return 0;
                break;
            }
        }
        if(i==n-1)
            return 1;

    }
    else
    {
        double m= va_arg(va,double);
        for(i=0;i<n-1;i++)
        {
            double e= va_arg(va,double);
            if(e>m)
            {
                m=e;
            }
            else
            {
                return 0;
                break;
            }
        }
        if(i==n-1)
            return 1;

    }
    va_end(va);

}
int main() {

    printf("%d",crescator(4,'f',-1.0,7.0,10.0,11.0));

}
