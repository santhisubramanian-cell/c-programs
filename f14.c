#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    for(n;n!=0;n/=10){
        int digit = n%10;
        if(digit%2==0){
            count+=1;
        }
        
    }
    printf("%d",count);
    
    return 0;
}