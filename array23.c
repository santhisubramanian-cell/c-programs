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
    int sum1=0,sum2=0,sum3=0,sum4=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==0){
                sum1+=a[i][j];
            }
            if(i==r-1){
                sum2+=a[i][j];
            }
            if(j==0){
                sum3+=a[i][j];
            }
            if(j==c-1){
                sum4+=a[i][j];
            }
        }
    }

    printf("%d %d %d %d",sum1,sum2,sum3,sum4);
    return 0;

}