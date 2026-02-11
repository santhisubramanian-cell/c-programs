#include<stdio.h>
int circle(int radius){
    float circlearea=3.14*radius*radius;
    return circlearea;
}
int main(){
    int radius;
    scanf("%d",&radius);
    float area = circle(radius);
    printf("%f",area);
    return 0;
}