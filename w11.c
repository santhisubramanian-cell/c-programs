#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int totaldelay=0;
    int totalday=0;
    while (n>0){
        int days;
        scanf("%d",&days);
        totaldelay+=days;
        if(days>0){
            totalday+=1;
        }
        else{
            totalday=0;
        }
        n--;
    }
    printf("Total Delay: %d\n",totaldelay);
    printf("Delayed Days: %d",totalday);
    return 0;
    
    
}