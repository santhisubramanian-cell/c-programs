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
    for(int i=1;i<r-1;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
    }
    printf("\n");
    for(int j=1;j<c-1;j++){
        for(int i=0;i<r;i++){
            printf("%d ",a[i][j]);
        }
    }
    return 0;
}