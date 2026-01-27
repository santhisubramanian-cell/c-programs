#include<stdio.h>
int main(){
    int oramt;
    scanf("%d",&oramt);
    printf("1.Normal\n");
    printf("2.Express");
    int speedtype;
    scanf("%d",&speedtype);
    switch (speedtype)
    {
    case 1:
        printf("Delivery: 50");
        break;
    case 2:
        if(oramt<1000){
            printf("Delivery: 100");
        }
        else if(oramt>=1000){
            printf("Delivery: Free");
        }
        break;
    
    default:
        break;
    }

    return 0;
}