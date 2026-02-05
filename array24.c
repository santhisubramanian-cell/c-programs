#include<stdio.h>
int prime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
        return 1;
    }
}
int main(){
    int r,c,count=0;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        int numprime=1;
        for(int j=0;j<c;j++){
            if(!prime(a[i][j])){
                numprime=0;
                break;
            }
        }
        if(numprime){
            count++;
        }

    }
    printf("%d",count);
    return 0;
}