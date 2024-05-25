#include <stdio.h>
#include <string.h>
#include <math.h>

int verif(int m, int k)
{
    int h=0;

    while(m) {
        if (m % 10 == 1)
            h++;
        m=m/10;
    }
    if(h==k)
        return 1;
    else
        return 0;
}
void generate(int n,int k)
{
    int x=0,i,j,g,h;
    for(i=0;i<k;i++)
        x=x*10+1;

    g=pow(10,n);
    h=pow(10,n-1);
    for(j=x;j<g;j++)
    {
        if(verif(j,k)==1&&j>h)
            printf("%d\n",j);
    }
}
int main() {

    int n,k;
    scanf("%d %d",&n,&k);
    generate(n,k);

}
