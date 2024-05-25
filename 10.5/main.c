#include <stdio.h>
#include <string.h>

char *fibon(int n,const char *s1,const char *s2)
{
   static char s3[10000];
   strcpy(s3,"");
    char t1[1001];

    if(n==0||n==1)
    {
        strcpy(s3,s1);

    }
    else if (n == 2)
        strcpy(s3, s2);

    else {

        strcpy(t1, s1);
        strcat(t1, s2);

        strcpy(s3, fibon(n - 1, s2, t1));
    }


    return s3;


}
int main() {
    int n;
    char s1[101],s2[101];
    scanf("%100s %100s",s1,s2);
    scanf("%d",&n);
    printf("fibo: %s ",fibon(n,s1,s2));
    return 0;
}
