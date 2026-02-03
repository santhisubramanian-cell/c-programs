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
    int max=a[0][0];
    int second=a[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]>max){
                second=max;
                max=a[i][j];
            }
        }
    }
    printf("second largest: %d",second);
    return 0;
}