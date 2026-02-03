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
    int count=0;
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int rowmin=1;
            int colmax=1;
            for (int k = 0; k < c; k++) {
                if (a[i][k] < a[i][j]) {
                    rowmin = 0;
                    break;
                }
            }
            for (int k = 0; k < r; k++) {
                if (a[k][j] > a[i][j]) {
                    colmax = 0;
                    break;
                }
            }
            if (rowmin && colmax) {
                count++;
            }

        }
    }
    printf("%d",count);
   
    return 0;
}