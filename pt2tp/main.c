#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int *f(int n,...) {
    int i, *v=NULL, j, g, k, l = 0;
    va_list va;
    va_start(va, n);
    for (i = 0; i < n; i++) {
        k = 0;
        g = va_arg(va, int);
        for (j = 2; j <=(g / 2); j++) {
            if (g % j == 0) {
                k = 1;
                break;
            }
        }
        if (k == 0) {
            l++;
       v = (int *) realloc(v, l * sizeof(int));

       if(v==NULL)
               {
                printf("mem insifi");
                exit(-1);
            }
            v[l-1] = g;
        }
    }
    va_end(va);
    return v;
}
int main() {
    int n,i;

 int *v=f(5,44,17,9,5,11);
 n=5;
 for(i=0;i<n;i++)
     printf("%d ",v[i]);
 free(v);
    return 0;
}
