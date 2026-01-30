#include<stdio.h>
int main(){
    int wallet;
    int n;
    scanf("%d %d",&wallet,&n);
    int count=0;
    
    while(n>0){
        int amt;
        scanf("%d",&amt);
        if(wallet>amt){
            wallet-=amt;
            count++;
        }
        n--;
    }
    printf("Successful Purchases: %d\n",count);
    printf("Final Balance: %d",wallet);
    return 0;
}