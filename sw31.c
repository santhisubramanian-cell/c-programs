#include<stdio.h>
int main(){
    int dtype;
    scanf("%d",&dtype);
    switch(dtype)
    {
    case 1:
        printf("Membership Fee 1500");
        break;
    case 2:
        printf("Membership Fee 4000");
        break;
    case 3:
        printf("Membership Fee 7000");
        break;
    default:
        break;
    }
    return 0;
}