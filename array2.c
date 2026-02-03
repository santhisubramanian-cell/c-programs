#include<stdio.h>
#include<stdlib.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int largestpositive = a[0][0];
    int smallestnegative= a[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]>0){
                if(a[i][j]>largestpositive){
                    largestpositive=a[i][j];
                }
            }
            if(a[i][j]<0){
                if(a[i][j]<smallestnegative){
                    smallestnegative=a[i][j];
                }
            }
        }
        
    }
    printf("%d",largestpositive*abs(smallestnegative));
    return 0;
}
