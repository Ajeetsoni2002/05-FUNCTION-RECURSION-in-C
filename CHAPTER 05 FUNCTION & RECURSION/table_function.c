#include<stdio.h>

void table();



int main(){
printf("the table of 5\n");
table();

printf("print the table of 6\n");
table();

// than again print a big table
printf("print the table of 12\n");
table();

return 0;
}

void table(){
int n;
printf("enter the value of n\n");
scanf("%d",&n);

        for(int i=1; i<=10;i++)
        {
                printf("%d\n",n*i);
        }
}
