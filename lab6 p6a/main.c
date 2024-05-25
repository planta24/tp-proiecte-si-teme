#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include <string.h>
#include <malloc.h>

char *concat(int n,...)
{
char *v;
va_list va;
int m,i,d;
char s[100];
    va_start(va,n);
    strcpy(s, va_arg(va,char*));
    m=strlen(s);
if((v=(char*)malloc(m+2))==NULL)
{
    printf("mem insufi");
    exit(-1);
}
 strcat(v,s);
d=m;
v[d]=' ';

for(i=1;i<n;i++)
{
    strcpy(s, va_arg(va,char*));
    m=strlen(s);
    if((v= (char*)realloc(v,d+m+2))==NULL)
    {
        printf("mem insufi");
        exit(-1);
    }
    strcat(v,s);
    d=d+m;
    v[d+1]=' ';
    d=d+1;


}
    va_end(va);
   // free(v);
    return v;

}
int main() {



    printf("%s", concat(4,"Ion","si","Ana","la job"));

    return 0;
}
