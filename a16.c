#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int price[size];
    for(int i=0;i<size;i++){
        scanf("%d",&price[i]);
    }
    int min = price[0];
    int max = price[1]-price[0];
    for(int j=0;j<size;j++){
        int c = price[j]-min;
        if(c>max){
            max=c;
        }
        if(price[j]<min){
            min=price[j];
        }
    }
    printf("%d",max);
    return 0;
}