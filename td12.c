#include<stdio.h>
int main(){
    int r,c,flag=0;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j && a[i][j]!=0){
                flag=1;
            }
        }
    }
    if(flag){
        printf("diagonal matrix");
    }
    else{
        printf("non diagonal matrix");
    }
    return 0;
}