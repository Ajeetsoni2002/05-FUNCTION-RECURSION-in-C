#include<stdio.h>
 
 void printPattern(int n);
 int main(){
int i;
printf("enter the value of i\n");
scanf("%d",&i);
printPattern(i);

return 0;
 }

 void printPattern(int n){
        
        if (n==1){
                printf("*\n");
                return;
        }


        printPattern(n-1);
        for(int i=0; i<(2*n-1); i++)
        {
                printf("*");
        }
        printf("*\n");
 }