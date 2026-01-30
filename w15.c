#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int totalover=0;
    int count =0;
    while(n>0){
        int hour;
        scanf("%d",&hour);
        totalover+=hour;
        if(hour>4){
            count++;
        }
        else{
            count=0;
        }
        n--;
    }
    printf("Total Overtime: %d\n",totalover);
    printf("Burnout Days: %d",count);
    return 0;
}