#include<stdio.h>
int main(){
    int acctype;
    scanf("%d",&acctype);
    int balance,withamt;
    scanf("%d %d",&balance,&withamt);
    switch (acctype)
    {
    case 1:
        if(balance>=withamt){
            printf("Transaction Successfull");
        }
        else{
            printf("Transaction Rejected");
        }
        break;
    case 2:
        if(withamt>=5000){
            printf("Limit Exceeded");
        }
        break;
        
    
    default:
        break;
    }
    return 0;
}