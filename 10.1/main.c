#include <stdio.h>
int cmmdc(int a,int b)
{
    if(a==b||a==0||b==0)
        return a;
    else
        if(a>b)
         return  cmmdc(a-b,b);
        else
            return cmmdc(a,b-a);
}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("cmmdc %d ",cmmdc(a,b));
    return 0;
}
