#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int caut(int a,int b,int m,int *v)
{

    int mij;
    if(a>b)
        return 0;
    mij=a + (b - a) / 2;
    if(v[mij]==m)
        return 1;
    if(v[mij]>m)
    {
        return caut(a,mij-1,m,v);
    }
    else
        return caut(mij+1,b,m,v);

    return 0;


}
int main() {
    int n,v[101],m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%d",&v[i]);
    printf("%d",caut(0,n-1,m,v));
}
