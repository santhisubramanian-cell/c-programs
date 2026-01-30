#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int studyhour=0;
    int notstudyhour=0;
    int count=0;
    while(n>0){
        int study;
        scanf("%d",&study);
        if(study>0){
            count++;
            studyhour++;

        }
        
        else{
            notstudyhour++;
            
        }
        n--;
    }
    printf("inactive weeks: %d\n",count);
    if(studyhour==notstudyhour){
        printf("High");
    }
    else{
        printf("Low");
    }

    return 0;
}