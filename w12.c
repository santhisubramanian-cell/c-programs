#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int max=0;
    int shour=0;
    while (n>0)
    {
        int hours;
        scanf("%d",&hours);
        if(hours>max){
            max=hours;
        }
        if(hours>5){
            shour+=1;
        }
        else{
            shour=0;
        }
        n--;
    }
    printf("Max Usage: %d\n",max);
    printf("Surge Hours: %d",shour);

    
    return 0;
}