#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *f,*g;
    char a,b;
    int i=0;
    if((f=fopen("intrare1.dat","rb"))==NULL)
    {
        printf("probleme deschidere fisier");
        exit(-1);
    }
    if((g=fopen("intrare2.dat","rb"))==NULL)
    {
        printf("probleme deschidere fisier");
        exit(-1);
    }
    while(fread(&a,1,1,f)==1&& fread(&b,1,1,g)==1)
    {
        if(a!=b)
        {
            printf("offset:%X f1:%02x f2:%02x\n",i,a,b);
        }
        i++;
    }
    while(fread(&a,1,1,f)==1)
    {


            printf("offset:%X f1:%02x\n",i,a);

        i++;
    }
    while(fread(&b,1,1,g)==1)
    {


        printf("offset:%X f2:%02x\n",i,b);

        i++;
    }

    fclose(f);
    fclose(g);
    return 0;
}
