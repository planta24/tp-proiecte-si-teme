#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k=0,l,t,g,o,s,a;

    scanf("%d",&n);
    char m[n][n],v[n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%c ",&m[i][j]);

        }

    }
    i=0;
    while(k==0)
    {
        scanf("%c",&v[i]);
        if(v[i]=='\n')
            {k=1;
            break;
            }
        i++;

    }

    t=i;
    for(o=0;o<=n-t;o++)
    {
    for(i=0;i<n;i++)
    {
        l=0;
        g=i;
        s=o;
        for(j=0;j<t;j++)

        {
            if(v[j]==m[i][j+o])
            {
                l++;

            }
            if(l==t)
                break;
        }
        if(l==t)
        {
            printf("%d %d spre dreapta\n",g,s);
        }
        l=0;
        a=0;
        for(j=t-1;j>=0;j--)
        {

            if(v[j]==m[i][a+o])
            {
                l++;
            }
             if(l==t)
                break;
            a++;

        }

        if(l==t)
        {
            printf("%d %d spre stangaaa\n",g,a+o);
        }
        l=0;

       for(j=0;j<t;j++)
       {
           if(v[j]==m[j+o][i])
           {
               l++;
           }
           if(l==t)
           {
               break;
           }
       }
       if(l==t)
       {
           printf("%d %d in jos\n",s,g);
       }
       l=0;
       a=0;
       for(j=t-1;j>=0;j--)
       {
           if(v[j]==m[a+o][i])
           {
               l++;
           }
           if(l==t)
                break;
            a++;

       }
        if(l==t)
        {
            printf("%d %d in sus\n",a+o,g);
        }


    }
    }



    return 0;
}
