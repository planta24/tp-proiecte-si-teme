#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,v[10][10],i,k=100,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%d",&v[i][j]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(v[i][j]<k&&v[i][j]>0 )
                k=v[i][j];
        }
    }
    printf("%d",k);
    return 0;
}
