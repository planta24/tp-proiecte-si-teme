#include <stdio.h>
int used[20]; // Vector pentru a marca elementele folosite
int perm[20]; // Vector pentru a stoca permutarea curentă
int n;
void backtracking(int p)
{
    int g,i;
    if(p==n)
    {
        g=1;
        for(i=0;i<n;i++)
            if(perm[i]!=i+1)
            {
                g=0;
                break;
            }
    }
    if(g)
    {
        for(i=0;i<n;i++)
            printf("%d",perm[i]);
        printf("\n");
        return;
    }

    for(i=1;i<=n;i++)
    {
        if(!used[i])
        {
            perm[p]=i;
            used[i]=1;
            backtracking(p+1);
            used[i]=0;
        }
    }
}
int main() {
    printf("Introduceți n: ");
    scanf("%d", &n);

    backtracking(0);

    return 0;
}
