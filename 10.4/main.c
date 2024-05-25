#include <stdio.h>

int fibo(int n)
{
    int a;

    if(n==1||n==0)
        return 1;
    else
    {
        return fibo(n-1)+fibo(n-2);
    }


}
int main() {
    int a;
    scanf("%d",&a);
    printf("fibo: %d ",fibo(a));
    return 0;
}
