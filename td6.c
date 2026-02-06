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
    int p_count=0;
    int n_count=0;
    int z_count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]>0){
                p_count++;
            }
            else if(a[i][j]<0){
                n_count++;
            }
            else{
                z_count++;
            }
        }
    }
    printf("%d ",p_count);
    printf("%d ",n_count);
    printf("%d ",z_count);
    return 0;
}