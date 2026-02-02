#include<stdio.h>
int main(){
    int n,palindrome=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-i-1]){
            palindrome=0;
            break;
        }
    }
    if(palindrome){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
}