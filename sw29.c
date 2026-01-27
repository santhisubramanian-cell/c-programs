#include<stdio.h>
int main(){
    int vehicleType;
    scanf("%d",&vehicleType);
    int d;
    scanf("%d",&d);
    switch(vehicleType)
    {
    case 1:
        printf("Fare %d",d*10);
        break;
    case 2:
        printf("Fare %d",d*15);
        break;
    case 3:
        printf("Fare %d",d*20);
        break;
    default:
        break;
    }
    return 0;
}