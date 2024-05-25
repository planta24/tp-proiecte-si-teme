#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char **argv) {


    int i,n,k=0,j,m,q;
    char a;
    n=atoi(argv[1]);
    if(n==0)
    {
        for(i=2;i<argc;i++)
            k=k+strlen(argv[i]);
        printf("%d",k);
    }
    else
    {
        for(i=2;i<argc;i++)
        {
         for(j=0;j<strlen(argv[i]);j++)
         {
             k=0;
             a=argv[i][j];
             if(a!='0')
             {
                 for(q=2;q<argc;q++) {
                     for (m = 0; m < strlen(argv[q]); m++)
                     {
                         if(a==argv[q][m]) {
                             k++;
                             argv[q][m]='0';
                         }
                 }
             }
                 printf("%c: %d\n",a,k);
             }
         }
        }
    }

    return 0;
}
