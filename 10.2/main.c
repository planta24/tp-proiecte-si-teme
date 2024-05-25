#include <stdio.h>
int suma(int n)
{
    int a=0;
    if(n<10) {
        a=n;
        return a;
    }
    else
    {
        a=n%10;
        n=n/10;
        return a+suma(n);
    }
}
int main() {
    int a;
    scanf("%d",&a);
    printf("suma %d ",suma(a));
    return 0;
}
