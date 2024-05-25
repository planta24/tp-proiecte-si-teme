#include <stdio.h>
#include <stdlib.h>


#define MAX_SIZE 100
int top = -1;

char stack[MAX_SIZE];
void push(int item) {
if(top == MAX_SIZE-1) {
printf("Stiva este plina\n");
return;
}
stack[++top] = item;
}
int pop() {
if(top == -1) {
printf("Stiva este goala\n");
return -1;
}
return stack[top--];
}

void display(int m) {
if(top == -1) {
printf("Stiva este goala\n");
return;
}
printf("\nElementele din stiva sunt: ");
for(int i=0; i<m; i++)
printf("%c",stack[i]);
printf("\n");
}

int main()
{

char v[100];
int n,i=0,k=0,m,c;
scanf("%d",&n);
scanf("%d",&m);
c=n-m;
for(i=0;i<n;i++)
{
scanf("%c",&v[i]);
}


for(i=0;i<n;i++)
{
printf("%c",v[i]);
}
for(i=0;i<n;i++)
{
push(v[i]);
}
//display(c);


return 0;
    return 0;
}
