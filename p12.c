#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        
        for(int s=1;s<=4-i;s++){
            printf(" ");
        }
        
        for(int j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    
    }
    return 0;
}