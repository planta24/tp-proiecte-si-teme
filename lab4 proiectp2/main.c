#include <stdio.h>
#include    <string.h>
#include <stdlib.h>

typedef struct
{
    char titlu[50];
    char autor[30];
    unsigned int nrex:10;
    unsigned int pret:9;
    unsigned int nrpag:10;
    unsigned int greutate:13;
    unsigned int tip:1;
    union
    {
        char isbn[14];
        unsigned int an:11;
    }det;

}carte;
int main() {
    carte c[101];
    unsigned int n,i,a,b,g,d,e,q;
    scanf("%u",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        fgets(c[i].titlu, 50, stdin);
        if (c[i].titlu[strlen(c[i].titlu) - 1] == '\n')
            c[i].titlu[strlen(c[i].titlu) - 1] = '\0';
        fgets(c[i].autor, 30, stdin);
        if (c[i].autor[strlen(c[i].autor) - 1] == '\n')
            c[i].autor[strlen(c[i].autor) - 1] = '\0';
        scanf("%u %u %u %u %u",&a,&b,&g,&d,&e);
        getchar();
        c[i].nrex=a;
        c[i].pret=b;
        c[i].nrpag=g;
        c[i].greutate=d;
        c[i].tip=e;
        if(c[i].tip==0) {
            scanf("%13s", c[i].det.isbn);
            getchar();
        }
        else {
            scanf("%u", &q);
            c[i].det.an=q;
            getchar();
        }
    }

    for(i=0;i<n;i++) {
        if (c[i].pret > 100 && c[i].tip == 0) {
            printf("carte mai scumpa de 140:\n");
            printf("titlu:%s autor:%s nr exemplare:%u pret:%u nrpag:%u greutate:%u", c[i].titlu, c[i].autor,
                   c[i].nrex, c[i].pret, c[i].nrpag, c[i].greutate);

            if (c[i].tip == 0) {
                printf(" carte ");
                printf(" isbn: %s\n", c[i].det.isbn);
            } else {
                printf(" revista ");
                printf(" an aparitie:%u\n", c[i].det.an);
            }
            printf("\n");
        }
    }

    for(i=0;i<n;i++)
    {
        printf("titlu:%s autor:%s nr exemplare:%u pret:%u nrpag:%u greutate:%u",c[i].titlu,c[i].autor,c[i].nrex,c[i].pret,c[i].nrpag,c[i].greutate);

        if(c[i].tip==0) {
            printf(" carte ");
            printf(" isbn: %s\n", c[i].det.isbn);
        }
        else {
            printf(" revista ");
            printf(" an aparitie:%u\n",c[i].det.an );

        }
    }
    FILE    *f;
    if((f= fopen("inventar.bin","wb"))==NULL)
    {
        printf("eroare descghidere fisier");
        exit(-1);
    }
    fwrite(c,sizeof(carte),n,f);
    fclose(f);

    return 0;
}
