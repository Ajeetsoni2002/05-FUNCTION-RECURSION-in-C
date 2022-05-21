#include<stdio.h>

void namaste();
void bonjour();
int main(){
        int ch;
        
        printf("enter f for french and i for indian\n");
        scanf("%c",&ch);

        if(ch=='i'){
                namaste();
        }
        else{
                bonjour();
        }

        
        return 0;

}
void namaste(){
        printf("namaste\n");
}
void bonjour(){

        printf(" tere liye koi seva nhi hai\n");
}