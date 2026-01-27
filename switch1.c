#include<stdio.h>
int main(){
    
    int connectionType;
    printf("1.Domestic\n");
    printf("2.Commercial");
    scanf("%d",&connectionType);
    int units,bill;
    scanf("%d",&units);
    switch (connectionType)
    {
    case 1:
        if(units<=100){
            bill=units*3;
            printf("bill :%d",bill);
        }
        else if(units>100){
            bill=(units-80)*3+(units-100)*5;
            int result = bill-80;
            printf("bill: %d",result);
        }
        break;
    case 2:
        if(units<=100){
            bill=units*7;
            printf("%d",bill);
        }
        else if(units>100){

            bill=(units-20)*6+(units-100)*8;
            printf("%d",bill);
        }
    default:
        break;
    }
    return 0;
}