#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cautare(int i,char **argv,int argc)
{
    int j,m=0,k=0;


    for(j=i+1;j<argc;j++)
    {
        k=0;

        if(strcmp(argv[j],"-u")!=0)
            k++;
        if((strcmp(argv[j],"-f")!=0))
            k++;
        if(strcmp(argv[j],"-r")!=0)
            k++;
        if(k==3)
        {
            m=j;
            break;
        }

    }

    return m;
}
int main(int argc,char **argv) {
    int i,n,a,j,m;
    char d;
    i=1;
    while(i<argc)
    {
        if((strcmp(argv[i],"-u")==0))
        {
            m=cautare(i,argv,argc);


            for(j=0;j<strlen(argv[m]);j++)
            {
                if(argv[m][j]>'Z')
                    argv[m][j]=argv[m][j]-32;
            }

        }
        else
        if(strcmp(argv[i],"-f")==0)
        {

            m=cautare(i,argv,argc);
            if(argv[m][0]>='a')
                argv[m][0]=argv[m][0]-32;
            for(j=1;j<strlen(argv[m]);j++)
            {
                if(argv[m][j]<='Z')
                    argv[m][j]=argv[m][j]+32;
            }

        }
        else
            if(strcmp(argv[i],"-r")==0)
            {

                m=cautare(i,argv,argc);
                for(j=0;j<strlen(argv[m])/2;j++)
                {
                    d=argv[m][j];
                    argv[m][j]=argv[m][strlen(argv[m])-1-j];
                    argv[m][strlen(argv[m])-1-j]=d;
                }

            }




        //printf("%s \n",argv[m]);
            i++;
                if(i==m)
                    printf("%s ",argv[m]);

    }
    for(i=1;i<argc;i++)
       printf("%s ", argv[i]);






    return 0;
}
