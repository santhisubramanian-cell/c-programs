#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}
int main(){
    int a,b;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    switch (op)
    {
    case '+':
        printf("%d",add(a,b));
        break;
    case '-':
        printf("%d",sub(a,b));
        break;
    case '*':
        printf("%d",mul(a,b));
        break;
    case '/':
        printf("%d",div(a,b));
        break;
    
    default:
        break;
    }
    return 0;
}