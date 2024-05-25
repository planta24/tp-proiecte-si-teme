#include <stdio.h>

// Definirea tipului de funcție matematică
typedef int (*MathFunction)(int);

// Funcție generică pentru tabelarea funcțiilor matematice
void tabelareFunctie(MathFunction functie, int A, int B, int P) {
    int x;
    printf("x\tf(x)\n");
    for (x = A; x <= B; x += P) {
        printf("%d\t%d\n", x, functie(x));
    }
}

// Funcția matematică (x*x*x+4)/(x*x+5)
int func1(int x) {
    return (x*x*x + 4) / (x*x + 5);
}

// Funcția matematică x+10
int func2(int x) {
    return x + 10;
}

// Funcția matematică 2*x*x-1
int func3(int x) {
    return 2*x*x - 1;
}

// Funcția matematică x*x
int func4(int x) {
    return x*x;
}

int main() {
    int A, B, P;

    // Citirea intervalului și pasului de la tastatură
    printf("Introduceti A, B si P: ");
    scanf("%d %d %d", &A, &B, &P);

    // Tabelarea funcțiilor folosind funcția generică
    printf("\nTabelare functie 1:\n");
    tabelareFunctie(func1, A, B, P);

    printf("\nTabelare functie 2:\n");
    tabelareFunctie(func2, A, B, P);

    printf("\nTabelare functie 3:\n");
    tabelareFunctie(func3, A, B, P);

    printf("\nTabelare functie 4:\n");
    tabelareFunctie(func4, A, B, P);

    return 0;
}
