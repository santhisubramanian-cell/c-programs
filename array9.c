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
    int count1=0,count2=0,count3=0,count4=0;
    int finalcount=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]%2==0){
                count1++;
            }
            else{
                count2++;
            }
        }
        if(count1==count2){
            finalcount++;
        }
        
    }
    for(int i=1;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]%2==0){
                count3++;
            }
            else{
                count4++;
            }
        }
        if(count3==count4){
            finalcount++;
        }
    }
    printf("%d",finalcount);
    return 0;
}