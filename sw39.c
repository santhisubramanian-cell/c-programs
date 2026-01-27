#include<stdio.h>
int main(){
    int dc;
    scanf("%d",&dc);
    switch(dc)
    {
    case 1:
        printf("Transport Fee 800");
        break;
    case 2:
        printf("Transport Fee 1200");
        break;
    case 3:
        printf("Transport Fee 1800");
    default:
        break;
    }
    return 0;
}