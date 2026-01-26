#include<stdio.h>
int main(){
    int p,q,r;
    scanf("%d %d %d", &p,&q,&r);
    if(p>q && p>r){
        printf("%d is largest",p);
    }
    else if(q>p && q>r){
        printf("%d is largest",q);
    }
    else{
        printf("%d is largest",r);
    }
    return 0;
}