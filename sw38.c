#include<stdio.h>
int main(){
    int dtype;
    scanf("%d",&dtype);
    switch(dtype)
    {
    case 1:
        printf("Consultation Fee 500");
        break;
    case 2:
        printf("Consultation Fee 1200");
        break;
    
    default:
        break;
    }
    return 0;
}