#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *f,*g;
    char b,w[100],r[1001];
    int i=0,n,j,m;



    if((g=fopen(argv[argc-1],"wb"))==NULL)
    {
        printf("probleme deschidere fisier1");
        exit(-1);
    }
    n=1;
    while(n<argc-1)
    {
        if((f=fopen(argv[n],"rb"))==NULL)
        {
            printf("probleme deschidere fisier");
            exit(-1);
        }
        while((j=fread(&b,1,1,f))>0)
        {
            fwrite(&b,1,1,g);
        }
        fclose(f);
        n++;

    }
    fclose(g);


    return 0;
}
