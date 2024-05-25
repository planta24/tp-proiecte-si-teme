#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int fiboa(int n)
{



    if(n==1||n==0) {
        return 1;

    }
    else {

        return fiboa(n - 1) + fiboa(n - 2);
    }

}
int main() {
    int n;

    scanf("%d",&n);
    float f;
    int a,b;
    a= fiboa(n);

    b= fiboa(n-1);


    f=(float)a/b;
    printf("fibo: %f ",f);
    return 0;
}
