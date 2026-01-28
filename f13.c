#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int sum=0;
    for(int i=1;i<=m;i++){
        if(i%n==0){
            sum=sum+i;       
            
        }

    }
    printf("%d",sum);

    return 0;
}