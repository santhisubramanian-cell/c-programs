#include<stdio.h>
#include<math.h>
int main(){
    long binary,i=0;
    scanf("%ld",&binary);
    int decimal=0;
    for(i=0;binary!=0;++i){
        int digit = binary%10;
        binary=binary/10;
        decimal+=digit*pow(2,i);
    }
    printf("%d",decimal);
    return 0;
}