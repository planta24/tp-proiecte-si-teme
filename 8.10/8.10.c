#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,v[10][4],s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d ",&v[i][j]);
        }
    }


     for(i=0;i<n;i++)
    {s=0;
        for(j=0;j<3;j++)
        {
            if(v[i][j]>v[i][j+1])
                s++;

        }
        if(s==0)
            printf("produsul %d a crescut\n",i+1 );
    }
    return 0;
}
