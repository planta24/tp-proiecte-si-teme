#include <stdio.h>
#include <stdlib.h>

int main()
{
   int m,n,p,i,j,k,q,t;
   scanf("%d %d %d",&m,&n,&p);
   int a[m][n],b[n][p],c[m][p];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<p;j++)
        scanf("%d",&b[i][j]);

if(n>m)
   p=n;

    for(i=0;i<m;i++)
        {k=0;

        for(q=0;q<m;q++)
{
k=0;

        for(j=0 ;j<p;j++)
        {
            k=k+(a[i][j]*b[j][q]);
             printf("%d ",k);

        }
        printf("\n");
        c[i][q]=k;

}
        }

        printf("\n");
p=m;

    for(i=0;i<m;i++)
       {

       for(j=0;j<p;j++)
       {
           printf("%d ",c[i][j]);
       }
       printf("\n");
       }

    return 0;
}
