#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include <string.h>

void input(const char *fmt,...)
{
    int i;
    va_list va;
    va_start(va,fmt);
    for(i=0;i<strlen(fmt);i++)
    {
        if(fmt[i]!='%')
        printf("%c",fmt[i]);
        else
            if(fmt[i+1]=='d') {
                int *n= va_arg(va,int*);
               scanf("%d", n);
                i++;
            }
            else
                    if(fmt[i+1]=='f') {
                        float *f=va_arg(va, float*);
                    scanf("%f",f);
                        i++;
                    }
                    else
                        if(fmt[i+1]=='c') {
                            char *ch=va_arg(va, char*);
                            scanf(" %c",ch);
                            i++;
                        }

    }
    va_end(va);
}

int main() {
    int n;
    char ch;

    input("n=%d ttt ch=%c",&n,&ch);
    printf("\n%d %c",n,ch);
    return 0;
}
