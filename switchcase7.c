#include<stdio.h>
int main(){
    printf("1.Savings\n");
    printf("2.Fixed deposit");
    int acctype;
    scanf("%d",&acctype);
    int years;
    scanf("%d",&years);
    switch (acctype)
    {
    case 1:
        printf("Interest 4 percentage");
        
        break;
    case 2:
        if(years<=3){
            printf("Interest 5 percentage");
        }
        else{
            printf("Interest 7 percentage");
        }
        break;
    default:
        break;
    }


    return 0;
}