#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int succ =0;
    int cancel =0;
    
    while(n>0){
        int order;
        scanf("%d",&order);
        if(order==1){
            succ++;
        }
        else{
            cancel++;
        }
        n--;
    }
    printf("%d\n",succ);
    printf("%d\n",cancel);
    if(succ>=cancel){
       printf("safe");
    }
    else{
        printf("risk");
    }
    
    
    return 0;
}