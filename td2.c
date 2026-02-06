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
    int max;
    int min;
    for(int i=0;i<r;i++){
        max=a[i][0];
        min=a[i][0];
        for(int j=0;j<c;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
            if(a[i][j]<min){
                min=a[i][j];
            }
        }
        printf("%d ",max);
        printf("%d ",min);
    }
    return 0;
}