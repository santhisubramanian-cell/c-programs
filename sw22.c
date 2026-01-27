#include<stdio.h>
int main(){
    int ctype;
    scanf("%d",&ctype);
    int units;
    scanf("%d",&units);
    switch (ctype)
    {
    case 1:
        if(units<=30){
            int bill = units*5;
            printf("Bill %d",bill);
        }
        else if(units>30){
            int bill = (units-10)*5+(units-30)*8;
            printf("Bill %d",bill);
        }
        break;
    case 2:
        printf("Bill %d",units*10);
        break;
    
    default:
        break;
    }
    return 0;
}