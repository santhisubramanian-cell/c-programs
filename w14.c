#include<stdio.h>
int main(){
    int totalamt;
    int n;
    scanf("%d %d",&totalamt,&n);
    int withcount =0;
    
    while(n>0){
        int amt;
        scanf("%d",&amt);
        
        if(totalamt>amt){
            totalamt-=amt;
            withcount+=1;
            
            
        }
        n--;
    }
    printf("Successful Withdrawals: %d\n",withcount);
    printf("Remaining Cash: %d",totalamt);
    return 0;
}