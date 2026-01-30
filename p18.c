#include<stdio.h>
int main(){
    char c;
    for(int i=1;i<=5;i++){
        if(i==1){
            c = 'E';
        }
        else if(i==3 || i==2 ){
            c = 'C';
        }
        else if(i==4){
            c = 'B';
        }
        else if(i==5){
            c='A';
        }
        for(int j=1;j<=i;j++){
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}