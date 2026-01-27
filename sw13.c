#include<stdio.h>
int main(){
    int ltype;
    scanf("%d",&ltype);
    int credit;
    scanf("%d",&credit);
    switch (ltype)
    {
    case 1:
        if(credit>=700){
            printf("Approved");
        }
        else if(credit>=650 && credit<=699){
            printf("Manual Review");
        }
        break;
    case 2:
        if(credit>=700){
            printf("Approved");
        }
        else if(credit<700){
            printf("Rejected");
        }
        break;
    default:
        break;
    }
    return 0;
}