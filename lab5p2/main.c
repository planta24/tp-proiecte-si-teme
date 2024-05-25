#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *f;
    int a[101][101],n,i,m,j;
    if((f=fopen("ieisire.dat","wb"))==NULL)
    {
        printf("probleme deschidere fisier");
        exit(-1);
    }
    scanf("%d %d",&n,&m);
    fwrite(&n, sizeof(int), 1, f);
    fwrite(&m, sizeof(int), 1, f);


    for(i=0;i<n;i++)
        for(j=0;j<m;j++) {
            scanf("%d", &a[i][j]);

        }
    for(i=0;i<n;i++)
    fwrite(a[i], sizeof(int), m, f);
    fclose(f);
    if((f=fopen("ieisire.dat","rb"))==NULL)
    {
        printf("probleme deschidere fdisdier");

    }

    int h;
    int b;
    fread(&b,sizeof (int),1,f);
    fread(&b,sizeof (int),1,f);
    i=0;
    while((h=fread(&b,sizeof (int),1,f))>0) {
        printf("%d ", b);
        i++;
        if(i==m) {
            printf("\n");
            i=0;
        }

    }
    fclose(f);

    return 0;
}
