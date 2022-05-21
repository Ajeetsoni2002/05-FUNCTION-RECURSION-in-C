#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main(){
printf("starting time of the day\n");  
 goodmorning();  
 
printf("the mid time of the day\n");  
 goodafternoon();
printf("the last time of the day\n");
  
goodnight();


printf("the time between 12AM to 12PM called\n");
 goodmorning();
printf("time between 12PM to 6PM called\n");
 goodafternoon();
printf("time between 7PM to 12AM called\n");
 goodnight();



        return 0;
}
void goodmorning(){
        printf("a very good morning\n");

}
void goodafternoon(){
        printf("a very good after noon\n");

}
void goodnight(){
        printf("a very good night\n");
}






