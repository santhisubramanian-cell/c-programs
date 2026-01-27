#include<stdio.h>
int main(){
    int code,ex;
    scanf("%d %d",&code,&ex);
    switch (code)
    {
    case 1:
        if(ex>=3){
            int bonus = ex*5000;
            printf("Salary: %d",bonus+50000);
        }
        else{
            printf("50000");
        }
        break;
    case 2:
        if(ex>=3){
            int bonus = ex*5000;
            printf("Salary: %d",bonus+35000);
        }
        else{
            printf("35000");
        }
        break;
    
    default:
        break;
    }


    return 0;
}