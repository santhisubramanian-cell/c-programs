#include<stdio.h>
int main(){
    int r,c,found=0;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose of a matrix\n");
    for(int j=0;j<c;j++){
        for(int i=0;i<r;i++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}