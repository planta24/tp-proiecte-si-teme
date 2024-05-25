#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc,char **argv) {
    int i,n,k=0,j,d=0;
    FILE *f=NULL;
    if((f=fopen("cuvinte.txt","w"))==NULL)
    {
        printf("eraore la deschidere");
        exit(-1);
    }
    for(i=2;i<argc;i++)
    {
        k=strlen(argv[i]);
        fprintf(f,"ptr cuv %s %d ",argv[i],k);
        d=0;
        for(j=0;j<k;j++)
        {
            if(argv[i][j]=='a'||argv[i][j]=='e'||argv[i][j]=='i'||argv[i][j]=='o'||argv[i][j]=='u'||argv[i][j]=='A'||argv[i][j]=='E'||argv[i][j]=='I'||argv[i][j]=='O'||argv[i][j]=='U')

                d++;
        }
        fprintf(f,"are %d vocale ",d);
        d=0;
        for(j=0;j<k;j++)
        {
            if(isupper(argv[i][j])!=0)
                d++;
        }
        fprintf(f,"are %d litere mari",d);
        d=argv[i][0]-argv[i][k-1];
        fprintf(f," si diferenta %d dintre primul si ultmiu caracter",d);
        fprintf(f,"\n");
    }


    if (fclose(f) != 0)
    {
        perror(NULL);
        exit(-1);
    }
    return 0;
}
