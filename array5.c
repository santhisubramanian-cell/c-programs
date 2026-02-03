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
    int sum1=0;
    int sum2=0;
    int index1=0,index2=0;
    for(int i=0;i<r-1;i++){
        for(int j=0;j<c;j++){
            sum1+=a[i][j];
            index1=i;
        }
        printf("%d\n",sum1/c);
        for(int i=1;i<r;i++){
            for(int j=0;j<c;j++){
                sum2+=a[i][j];
                index2=i;

        }
        printf("%d\n",sum2/c);
    }
    if(sum1<sum2){
        printf("%d",index1);
    }
    else{
        printf("%d",index2);
    }
    
    }
    
    return 0;
    
    
}