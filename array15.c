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
    int count=0,k;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]<=1){
                continue;
            }
            for(k=2;k<a[i][j];k++){
                if(a[i][j]%k==0){
                    break;
                }
            }
            if(k==a[i][j]){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}