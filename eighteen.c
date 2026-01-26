#include<stdio.h>
int main(){
    int units,bill;
    scanf("%d",&units);
    if(units>0){
        bill=units*5;
    }
    printf("Bill amount = %d",bill);
    return 0;
}