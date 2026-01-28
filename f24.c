#include<stdio.h>
int main(){
    int n,rev=0;
    scanf("%d",&n);
    int check = n;
    for(n;n!=0;n/=10){
        int digit = n%10;
        rev = rev*10+digit;

    }
    if(check == rev){
        printf("Palindrome");
    }
    else{
        printf("not a palindrome");
    }
    return 0;
}