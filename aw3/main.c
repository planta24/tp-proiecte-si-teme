#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i,j,v[20][20],k[20],h[20],t=0,s=0,r=0;
  scanf("%d",&n);

  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
	{
	  scanf("%d",&v[i][j]);
	}
    }


  for(i=0;i<n;i++)
    {s=0;
      for(j=0;j<n;j++)
	{
	  s=s+v[i][j];
	}
      k[t]=s;
       t++;
    }
  t=0;
  for(j=0;j<n;j++)
    {s=0;
      for(i=0;i<n;i++)
	{
	  s=s+v[i][j];
	    }
      h[t]=s;
	t++;
    }

  for(i=0;i<n;i++)
    printf("%d ",k[i]);
  printf("\n");

  for(i=0;i<n;i++)
    printf("%d ",h[i]);
    return 0;
}
