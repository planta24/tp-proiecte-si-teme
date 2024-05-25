#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc,char **argv) {
    int i,n;
    if(strcmp(argv[1],"enc")==0)
    {
        n=atoi(argv[2]);


        for(i=3;i<argc;i++)
        {
            for(int j=0;j<strlen(argv[i]);j++)
            {
                if(isupper(argv[i][j]))
                    argv[i][j]=argv[i][j]+32;
                if(argv[i][j]+n>122) {
                    argv[i][j] = argv[i][j] - 26 + n;
                }
                else
                    argv[i][j]=argv[i][j]+n;


            }
        }
        for(i=3;i<argc;i++)
            printf("%s ",argv[i]);
    }
    else
    if(strcmp(argv[1],"dec")==0)
    {
        n=atoi(argv[2]);


        for(i=3;i<argc;i++)
        {
            for(int j=0;j<strlen(argv[i]);j++)
            {
                if(isupper(argv[i][j]))
                    argv[i][j]=argv[i][j]+32;
                if(argv[i][j]-n<97) {
                    argv[i][j] = argv[i][j] + 26 - n;
                }
                else
                    argv[i][j]=argv[i][j]-n;


            }
        }
        for(i=3;i<argc;i++)
            printf("%s ",argv[i]);
    }

    return 0;
}
