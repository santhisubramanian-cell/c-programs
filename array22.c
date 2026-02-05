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
    int count;
    for(int i=0;i<r;i++){
        count=0;
        for(int j=0;j<c;j++){
            for(int k=0;k<c;k++){
                if(a[i][j]>a[i][k+1]){
                    count++;
                    break;
            }
            }
        }
    }
    printf("Count: %d",count);
    return 0;
}