#include <stdio.h>
typedef struct
{
    char m[10];
    int h;

}note;
int main() {
    note v[101];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%9s %d",&v[i].m,&v[i].h);
    }
    for(i=0;i<n;i++)
    {
        printf("%s %d\n",v[i].m,v[i].h);
    }
    return 0;
}
