#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,v[10][10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                v[i][j]=1;
            else
                v[i][j]=0;

        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",v[i][j]);
        }
        printf("\n");
        }

    return 0;
}
