#include<stdio.h>
int main(){
    int r,c,found=0;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int target;
    scanf("%d",&target);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==target){
                found=1;
                break;
            }
            
        }
    }
    if(found){
            printf("element is found");
        }
        else{
            printf("element is not found");
        }
    return 0;
}