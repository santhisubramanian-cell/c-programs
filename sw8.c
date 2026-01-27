#include<stdio.h>
int main(){
    int mark,attend;
    scanf("%d %d",&mark,&attend);
    if(mark>=75 ){
        if(attend>75){
            printf("Distinction");
        }
    }
    else if(mark>=50 && mark<=74){
        if(attend>75){
            printf("Pass");
        }
    }
    else if(mark<50){
        if(attend<75){
            printf("Fail");
        }
        
    }
    
    return 0;
}