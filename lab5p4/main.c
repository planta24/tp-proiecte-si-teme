#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
    FILE *f;
    char a,b;
    int i=0,n,j;

    if((f=fopen(argv[1],"r+b"))==NULL)
    {
        printf("probleme deschidere fisier");
        exit(-1);
    }


    sscanf(argv[2],"%x",&i);

    fseek(f,i,SEEK_SET);
    for(j=3;j<argc;j++)
        fwrite(argv[j], strlen(argv[j]),1,f);

    fclose(f);

    return 0;
}
