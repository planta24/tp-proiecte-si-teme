#include <stdio.h>
#include <stdlib.h>

int main() {

   int i,j,n,m,**v;
   scanf("%d %d",&n,&m);
   if((v=(int**)malloc(n*sizeof(int*)))==NULL)
   {
       printf("probleme al alocare");
   }
   for(i=0;i<n;i++)
   {
       if((v[i]=(int*)malloc(m*sizeof(int)))==NULL)
       {
           printf("probleme la alocare");
           for(j=i;j>=0;j--)
               free(v[j]);
           free(v);
       }
   }
   for(i=0;i<n;i++)
       for(j=0;j<m;j++)
       {
           scanf("%d",&v[i][j]);
       }
   for(i=0;i<n;i++) {
       for (j = 0; j < m; j++)
           printf("%d", v[i][j]);
       printf("\n");
   }
   for(i=0;i<n;i++)
       free(v[i]);
   free(v);

    return 0;
}
