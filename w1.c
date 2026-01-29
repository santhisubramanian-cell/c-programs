#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int total=0;
    int max=0;
    int current =0;
    int i=0;
    while(i<n){
        int noise;
        scanf("%d",&noise);
        if(noise>70){
            total++;
            current++;
            if(current>max){
                max=current;
            }
        }
        else{
            current=0;
        }
        i++;
    }
    printf("Noise Violations:%d\n",total);
    printf("Longest Violation Streak: %d",max);
    return 0;
}