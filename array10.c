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
    int max1=0,index=0;
    for(int i=0;i<r;i++){
        int product=1;
        for(int j=0;i<c;i++){
            product*=a[i][j];
        }
        if(i==0|| product>max1){
            max1=product;
            index=i;
        }
}
printf("%d",index);
return 0;
    
}
   
