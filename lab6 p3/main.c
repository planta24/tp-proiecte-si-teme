#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc,char **argv) {
    int i;
    float m=0,n=0;
    m=atof(argv[1]);
    for(i=1;i<argc;i++)
    {

        if(i%2!=0&&i+2<argc)
        {
            n=atof(argv[i+2]);

        }
        else
        {

            if(strcmp(argv[i],"add")==0)
            {

                m=m+n;

            }
            else
                if(strcmp(argv[i],"sub")==0) {
                    m = m - n;

                }
                else
                    if(strcmp(argv[i],"mul")==0) {
                        m = m * n;

                    }
                    else
                        if(strcmp(argv[i],"div")==0) {

                            m = m / n;
                           
                        }
        }
    }
    printf("\n%f",m);



    return 0;
}
