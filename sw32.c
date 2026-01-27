#include<stdio.h>
int main(){
    int vtype;
    scanf("%d",&vtype);
    switch(vtype)
    {
    case 1:
        printf("Fine 1000");
        break;
    case 2:
        printf("Fine 1500");
        break;
    case 3:
        printf("Fine 2000");
        break;
    default:
        break;
    }
    return 0;
}