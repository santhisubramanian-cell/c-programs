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
    int max=0;
    int index=0;
    for(int i=0;i<r;i++){
        int current=1;
        for(int j=0;j<c;j++){
            if((a[i][j]%2) != (a[i][j-1]%2)){
                current++;
            }
            else{
                break;
            }
        }
        if(current>max){
            max=current;
            index=i;
        }
    }
    printf("%d",index);
    return 0;
}