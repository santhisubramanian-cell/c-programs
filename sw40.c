#include<stdio.h>
int main(){
    int w;
    scanf("%d",&w);
    switch(w)
    {
    case 1:
        printf("Under Warrenty");
        break;
    case 2:
        printf("Limited Warrenty");
        break;
    case 3:
        printf("Out of Warrenty");
    default:
        break;
    }
    return 0;
}