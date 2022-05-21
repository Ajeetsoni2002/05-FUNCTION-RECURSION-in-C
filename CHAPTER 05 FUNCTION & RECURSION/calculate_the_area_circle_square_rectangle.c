#include<stdio.h>

float squareArea(float side);
float circleArea(float rad);
float ractangleArea(float a, float b);

int main(){
// let for the area of rectangle Area
float a ,b;



printf("enter the value of a\n");
scanf("%f",&a);

printf("enter the value of b\n");
scanf("%f",&b);

printf("the area is %f\n",ractangleArea(a,b));
        return 0;

}
float squaeArea(float side){
        return side*side;
}
float circleArea(float rad){
        return 3.14*rad*rad;

}
float ractangleArea(float a, float b){
        return  a * b;
}