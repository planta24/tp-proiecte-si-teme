#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc,char **argv) {
    int i;
    float k=0,m;
    for(i=1;i<argc;i++)
    {
        //sscanf(argv[i],"%f",&m);
        m=atof(argv[i]);
        k=k+m;
    }
printf("%f",k);
    return 0;
}
