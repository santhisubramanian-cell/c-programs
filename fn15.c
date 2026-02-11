#include<stdio.h>
void multable(int num){
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",num,i,i*num);
    }
}
int main(){
    int num;
    scanf("%d",&num);
    multable(num);
    return 0;
}