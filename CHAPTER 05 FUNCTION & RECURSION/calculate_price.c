#include<stdio.h>

void calculatePrice(float value);
int main()
{
        float value;
        printf("enter the product value\n");
        scanf("%f",&value);
 calculatePrice(value);



        return 0;

}
void calculatePrice(float value){
        value = value + (0.18 * value);
        printf("final Price is %f",value);
}