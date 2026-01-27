#include<stdio.h>
int main(){
    int ftype,a;
    scanf("%d",&ftype);
    int l;
    scanf("%d",&l);
    switch(ftype)
    {
    case 1:
        a = l*105;
        printf("Fuel cost %d",a);
        break;
    case 2:
        a = l*92;
        printf("Fuel cost %d",a);
        break;
    case 3:
        a = l*85;
        printf("Fuel cost %d",a);
        break;
    default:
        break;
    }
    return 0;
}