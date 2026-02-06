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
    int zero=0;
    int non_zero=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]!=0){
                non_zero++;
            }
            else{
                zero++;
            }
        }
    }
    if(zero>non_zero){
        printf("sparse matrix");
    }
    else{
        printf("not a sparse matrix");
    }
    return 0;
}
