#include<stdio.h>
#include<string.h>
int main(){
    printf("1.Plan 1 - 199RS\n");
    printf("2.Plan 2 - 399RS");
    int plantype;
    scanf("%d",&plantype);
    int paytype;
    scanf("%d",&paytype);
    switch (plantype)
    {
    case 1:
        if(paytype == 11 || paytype ==12){
            printf("UPI\n");
            int caseback = 199-20;
            printf("Pay : %d",caseback);
        }
        else{
            printf("Wallet");
            printf("Pay : %d",199);
        }
        break;
    case 2:
        if(paytype == 11 || paytype ==12){
            printf("UPI\n");
            int caseback = 399-20;
            printf("Pay : %d",caseback);
        }
        else{
            printf("Wallet\n");
            printf("Pay : %d",399);
        }
        break;
    
    default:
        break;
    }
    return 0;
}