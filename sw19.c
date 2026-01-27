#include<stdio.h>
int main(){
    int attempt;
    scanf("%d",&attempt);
    int mark;
    scanf("%d",&mark);
    switch (attempt)
    {
    case 1:
        if(mark>=80){
            printf("Excellent");
        }
        break;
    case 2:
        if(mark>=60){
            printf("Good");
        }
        break;
    default:
        printf("Needs Improvement");
        break;
    }
    return 0;

}