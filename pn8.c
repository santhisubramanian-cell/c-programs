#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int s=1;s<=n-i;s++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            if(i==n || j==(2*i-1) || j==1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}