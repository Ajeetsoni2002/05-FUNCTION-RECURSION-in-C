#include<stdio.h>

void printTable(int n);

int main()
{
int n;
printf("enter a number\n");
scanf("%d",&n);

printTable(n);//this n is actual parameter or argument

        return 0;

}
void printTable(int n){  //this n is formal parameter
        for(int i=1; i<=10;i++){
                printf("%d\n",i*n);
        }
}