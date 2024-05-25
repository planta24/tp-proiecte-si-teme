#include <stdio.h>
#include <math.h>

int main() {
    int n,m,q,i=0,j=0,k=1,l,h=0,d,s;
    scanf("%d %d",&n,&q);
    m=pow(2,n);
    l=2;
    h=0;
    d=0;
    s=2;
    int v[m][m];



        h=1;
for(i=0;i<m;i++)
{
    k=h;

    for(j=0;j<m;j++)
    {
        v[i][j]=k;
        if((j+1)%4==0)
        {
            k=k+(m&2)+1;
        }
        else
            if((j+1)%2==0)
            {
                k=k+3;
            }
            else
            {
                k++;
            }
    }
    h=h+2;
}


    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }
    return 0;
}
