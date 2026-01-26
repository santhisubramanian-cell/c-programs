#include<stdio.h>
int main(){
    int option;
    int a,b,c;
    
    printf("1.Addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    scanf("%d",&option);

    scanf("%d %d", &a,&b);
    switch (option)
    {
    case 1:
        c=a+b;
        printf("Sum = %d", c);
        break;
    case 2:
        c=a-b;
        printf("Difference = %d", c);
        break;
    case 3:
        c=a*b;
        printf("Difference = %d", c);
        break;
    case 4:
        c=a/b;
        printf("Difference = %d", c);
        break;
    default:
        break;
    }
}