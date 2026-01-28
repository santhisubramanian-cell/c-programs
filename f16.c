#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    int check = n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(check == sum){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}