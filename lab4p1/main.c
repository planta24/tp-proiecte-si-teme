#include <stdio.h>
#include <stdlib.h>

int main() {


    FILE *f,*g;
    char v[4096];
    size_t n;
    if((f=fopen("src.dat","rb"))==NULL)
    {
        printf("probleme deschidere fisier");
        exit(-1);
    }

    if((g=fopen("dst.dat","wb"))==NULL)
    {
        printf("probleme deschidere fisier iesire");
        exit(-1);
    }
    while((n=fread(v,1,sizeof (v),f))>0)
    {
        fwrite(v,1,n,g);
    }
    fclose(f);
    fclose(g);

    return 0;
}
