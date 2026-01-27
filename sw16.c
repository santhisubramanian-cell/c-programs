#include<stdio.h>
int main(){
    int class;
    scanf("%d",&class);
    int weight;
    scanf("%d",&weight);
    switch (class)
    {
    case 1:
        printf("Extra Baggage charge %d",weight*300);
        break;
    case 2:
        if(weight<=3){
            printf("No charge");
        }
        break;
    case 3:
        if(weight>3){
            int a = (weight-3)*300;
            printf("Extra Baggage charge %d",a);
        }
        break;
    default:
        break;
    }
    return 0;
}