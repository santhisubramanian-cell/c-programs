#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum1=0;
    for(int i=0;i<r-1;i++){
        for(int j=0;j<c-1;j++){
            sum1+=a[i][j];
        }
    }
    int sum2=0;
    for(int i=0;i<r;i++){
        for(int j=1;j<c-1;j++){
            sum2+=a[i][j];
        }
    }
    int sum3=0;
    for(int i=1;i<r;i++){
        for(int j=0;j<c-1;j++){
            sum3+=a[i][j];
        }
    }
    int sum4=0;
    for(int i=1;i<r;i++){
        for(int j=1;j<c;j++){
            sum4+=a[i][j];
        }
    }
    if(sum1>sum2 && sum1>sum3 && sum1>sum4){
        printf("%d",sum1);
    }
    if(sum2>sum1 && sum2>sum3 && sum2>sum4){
        printf("%d",sum2);
    }
    if(sum3>sum1 && sum3>sum2 && sum3>sum4){
        printf("%d",sum3);
    }
    if(sum4>sum1 && sum4>sum2 && sum4>sum3){
        printf("%d",sum4);
    }
    return 0;
}