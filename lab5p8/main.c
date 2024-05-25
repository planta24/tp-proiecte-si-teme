#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main(int argc, char *argv[]) {
    FILE *f;
    char b,w[100],r[1001];
    int i=0,n,j,v[argc-2],m;
    uint8_t a;


    if((f=fopen(argv[1],"rb"))==NULL)
    {
        printf("probleme deschidere fisier");
        exit(-1);
    }


    j=0;
    for(i=2;i<argc;i++) {

        for( m=0;m<strlen(argv[i]);m++)
        {
            w[j]=argv[i][m];
            j++;
        }
    }
    int k=0;
    m=0;
    i=0;
    m=0;
int t;
   while( (n=fread(&b,1,1,f))==1) {
      r[i]=b;
      i++;
   }

   for(m=0;m<i;m++)
   {
       t=0;
       for(k=0;k<j;k++)
       {
           if(w[k]==r[k+m])
           {
               t++;
           }
       }
       if(t==j)
           printf("apare la poz:%d \n",m);
   }


    fclose(f);

    return 0;
}
