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
    int min=0,sum;
    int index=-1;
    
    for(int i=0;i<r;i++){
        sum=0;
        for(int j=0;j<c;j++){
            sum+=a[i][j];
        }
        if(sum!=0 && (index=-1 || sum<min)){
            min=sum;
            index=i;

        }
    }
    printf("%d",index);
    return 0;
}