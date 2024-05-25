#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


typedef struct
{
unsigned int peri:2;
unsigned int reteta:1;
unsigned int varsta:5;

}medi;
int main() {

    medi m;
   unsigned int a,b,c;
    scanf("%u %u %u",&a,&b,&c);
    m.peri=a;
    m.reteta=b;
    m.varsta=c;
    switch (m.peri) {
        case 0:
            printf("scazuta\n");
            break;
        case 1:
            printf("medie\n");
            break;
        case 2:
            printf("mare\n");
            break;
    }
    if(m.reteta==0)
        printf("fara reteta\n");
    else
        printf("cu reteta\n");
    printf("varsta: %u",m.varsta);
    return 0;
}
