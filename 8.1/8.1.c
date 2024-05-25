#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j,v[100][100],w[90][90],s=0,f=0,l=0,h=0,d,k;

  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
	{
	  scanf("%d",&v[i][j]);
	}
    }

  for(i=0;i<m;i++)
    {
      for(j=0;j<m;j++)
	{
	  scanf("%d",&w[i][j]);
	}
    }


    for(d=0;d<m;d++)
    {


  for(i=0;i<m;i++)
  {
      l=d;
      h=i;
      f=0;
      for(j=0;j<m;j++)
      {

          for(k=0;k<m;k++)
            {

                if(v[j+d][k+i]==w[j][k])
                {

                    f++;
                }

            }

                }

                if(f==(m*m))
                {

                printf("(%d,%d)",l,h);
                }

  }
    }
    return 0;
}
