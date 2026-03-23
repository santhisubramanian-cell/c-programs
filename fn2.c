#include<stdio.h>
void largest(int a,int b){
    if(a>b){
        printf("%d is greater than",a);
    }
    else if(a==b){
        printf("both are equal");
    }
    else{
        printf("%d is greater than",b);
    }
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    largest(a,b);
    return 0;
}
