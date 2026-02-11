#include<stdio.h>
int valid(int n){
    int rev=0;
    while (n!=0)
    {
        int digit=n%10;
        rev = rev*10+digit;
        n/=10;
    }
    return rev;
    
}
int main(){
    int n;
    scanf("%d",&n);
    int temp=n;
    int rev=valid(n);
    if(temp==rev){
        printf("palindrom");
    }
    else{
        printf("not a palindrome");
    }
    return 0;
}