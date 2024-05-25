#include <stdio.h>
#include <math.h>

int func(int x)
{
    int a;
    a = (x*x*x + 4) / (x*x + 5);
    return a;
}

int func1(int x)
{
    return x+10;
}
int func2(int x)
{
    int b;
    b=2*x*x-1;
    return b;
}
int main() {

    int a,b,c;
    int n,i,p;
    scanf("%d %d",&a,&b);
    scanf("%d",&p);


    i=a;

    while(i<=b)
    {
        printf("%d %d\n",i,func(i));
        i=i+p;
    }
    printf("\n");
    i=a;
    while(i<=b)
    {
        printf("%d %d \n",i,func1(i));
        i=i+p;
    }
    printf("\n");
    i=a;
    while(i<=b)
    {
        printf("%d %d \n",i,func2(i));
        i=i+p;
    }
    return 0;
}
