#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//double num(double a,double b, int n,double (*cond)(double))

int main() {
    double a,b,c;
    int n,i;
    scanf("%lf %lf",&a,&b);
    scanf("%d",&n);
    c=(fabs(a)+fabs(b))/n;
    for(i=0;i<n;i++)
    {
        printf("%lf ",cos(a+i*c));
    }

    return 0;
}
