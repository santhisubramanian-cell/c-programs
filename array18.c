#include<stdio.h>
#include<stdlib.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int max=0;
    int min=max;
    for(int i=0;i<r-1;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }
    for(int i=1;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]<min){
                min=a[i][j];
            }
        }
    }
    printf("%d",max-min);
    return 0;
}