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
    int n_count =0,z_count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]!=0){
                n_count++;
            }
            else{
                z_count++;
            }
        }
    }
    printf("non zero ele: %d\n",n_count);
    printf("zeros: %d",z_count);

    return 0;
}