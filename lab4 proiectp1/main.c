#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    unsigned int codm:14;
    unsigned int nrl:4;
    unsigned int hp:9;
    unsigned int an:11;
    char c[15];
    char cu[12];
}automobil;
int cmp(const void *elem1,const void *elem2)
{
    const automobil *p1=(const automobil*)elem1;
    const automobil *p2=(const automobil*)elem2;
    if(p1->an<p2->an)
        return 1;
    else
        return -1;

}
int main() {
    automobil ma[100];
    unsigned int i=0,n=0,a,b,c,d,m;
    scanf("%u",&n);
    for(i=0;i<n;i++)
    {
        scanf("%u %u %u %10s %12s %u",&a,&b,&c,&ma[i].c,&ma[i].cu,&d);
        ma[i].codm=a;
        ma[i].nrl=b;
        ma[i].hp=c;
        ma[i].an=d;
    }
    scanf("%u",&m);
    for(i=0;i<n;i++)
    {
        if(i==m)
        {
            ma[i]=ma[i+1];
        }
        else if(i>m)
            ma[i]=ma[i+1];
    }
    n=n-1;
    for(i=0;i<n;i++)
    {
        printf("masina %u: codm:%u nrl:%u hp:%u marca:%10s culoare:%12s an:%u\n",i+1, ma[i].codm, ma[i].nrl,ma[i].hp,ma[i].c,ma[i].cu,ma[i].an);
    }

    scanf("%u",&m);
    for(i=0;i<n;i++)
    {
        if(ma[i].nrl>m)
        printf("masina %u: codm:%u nrl:%u hp:%u marca:%10s culoare:%12s an:%u\n",i+1, ma[i].codm, ma[i].nrl,ma[i].hp,ma[i].c,ma[i].cu,ma[i].an);
    }
    qsort(ma,n,sizeof (automobil),cmp);
    printf("ordoanre\n");
    for(i=0;i<n;i++)
    {

            printf("masina %u: codm:%u nrl:%u hp:%u marca:%10s culoare:%12s an:%u\n",i+1, ma[i].codm, ma[i].nrl,ma[i].hp,ma[i].c,ma[i].cu,ma[i].an);
    }
    return 0;
}
