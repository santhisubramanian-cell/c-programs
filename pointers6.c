#include<stdio.h>
int swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
    printf("After swapping\n");
}


int main(){
   
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before swapping\n");
    printf("%d %d\n",a,b);
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}