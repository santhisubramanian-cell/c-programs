#include<stdio.h>
int leapyear(int year){
    int flag=0;
    if(year%4==0 && year%100!=0 || year%400==0){
       flag=1;
    }
    return flag;
}
int main(){
    int year;
    scanf("%d",&year);
    int res=leapyear(year);
    if(res){
        printf("leap year");
    }
    else{
        printf("not a leap year");
    }
    return 0;
}