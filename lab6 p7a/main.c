#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include <string.h>
#include <malloc.h>
int comune(int n,...)
{
    int i,*v[n],m[n],j,k,c=0,max=0;

va_list va;
    va_start(va,n);
    for(i=0;i<n;i++)
    {
        v[i]= va_arg(va,int*);
        m[i]= va_arg(va,int);

    }


    for(j=0;j<m[0];j++)
    {
        c=0;
        for(i=1;i<n;i++)
        {
            for(k=0;k<m[i];k++)
            {
                if(v[0][j]==v[i][k])
                {
                    c++;
                    break;
                }
            }
        }

        if(c==n-1)
        {
            max++;
        }
    }
    va_end(va);
    return max;

}
int main() {


  int  v1[2]={5,8};
   int v2[3]={8,8,5};
   int v3[3]={5,0,8};
    printf("%d",comune(3,v1,2,v2,3,v3,3) );
    return 0;
}
