#include<stdio.h>
int main(){
    int r,c,symmetric=1;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    if(r!=c){
        printf("non symmetric");
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            if(a[i][j]!=a[j][i]){
                symmetric=0;
                break;
            }
        }
    }
    if(symmetric){
            printf("symmetric matrix");
        }
        else{
            printf("non symmetric matrix");
        }
    return 0;
}