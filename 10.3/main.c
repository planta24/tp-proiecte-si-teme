#include <stdio.h>
int a=0;
int cifmax(int n)
{


    if(n<10) {

        if(a>n)
            return a;
        else
            return n;
    }
    else
    {

        if(a<n%10)
            a=n%10;
        n=n/10;

        return cifmax(n);

    }
}
int main() {
    int a;
    scanf("%d",&a);
    printf("cifmax: %d ",cifmax(a));
    return 0;
}
