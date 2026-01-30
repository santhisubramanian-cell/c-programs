#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int cs=0;
    int ls=0;
    while(n>0){
        int failure;
        scanf("%d",&failure);
        if(failure == 0){
            cs++;
        }
        else{
            if(cs>ls){
                ls=cs;
            }
            cs=0;
        }
        n--;
    }
    if(cs>ls){
        ls=cs;
    }
    printf("%d",ls);
    return 0;
}