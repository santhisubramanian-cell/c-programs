#include<stdio.h>
int main(){
    int vtype;
    scanf("%d",&vtype);
    int trip;
    scanf("%d",&trip);
    switch (vtype)
    {
    case 1:
        if(trip == 1){
            printf("100");
        }
        else if(trip>=2 && trip<=10){
            printf("800");
        }
        else{
            printf("800");
        }
        break;
    case 2:
        ;
        printf("%d",trip*240);
    default:
        break;
    }
    return 0;
}