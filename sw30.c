#include<stdio.h>
int main(){
    int hours;
    scanf("%d",&hours);
    switch(1)
    {
    case 1:
        if(hours<=1){
            printf("Short Interruption");
        }
        else if(hours<=4){
            printf("Medium Interruption");
        }
        else if(hours>4){
            printf("Long Interruption");
        }
        break;

    default:
        break;
    }
    return 0;
}