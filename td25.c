#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c],rot[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            rot[j][r-1-i]=a[i][j];
        }
        
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",rot[i][j]);
        }
        printf("\n");
    }
    return 0;
}