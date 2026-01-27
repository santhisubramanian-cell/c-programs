#include<stdio.h>
int main(){
    int btype,a;
    scanf("%d",&btype);
    int day;
    scanf("%d",&day);
    switch(btype)
    {
    case 1:
        a = day*2;
        printf("Late Fee %d",a);
        break;
    case 2:
        a = day*5;
        printf("Late Fee %d",a);
        break;
    default:
        break;
    }
    return 0;
}