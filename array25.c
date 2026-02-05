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
    int final=0,count=0;
    for(int i=0;i<r;i++){
        int max=a[i][0],min=a[i][0];
        for(int j=0;j<c;j++){
            if(a[i][j]<min){
                min=a[i][j];
            }
            else if(a[i][j]>max){
                max=a[i][j];
            }
        }  
        final = max-min;
        if(final<=1000){
            count++;
        }
          
    }
    printf("%d",count);
    
    return 0;
}