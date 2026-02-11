#include<stdio.h>
void evenorodd(int num){
    if(num%2 == 0){
        printf("even");
    }
    else{
        printf("odd");
    }
}
int main(){
    int num;
    scanf("%d",&num);
    evenorodd(num);
    return 0;
}