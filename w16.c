#include<stdio.h>
int main(){
    int maxwei;
    int n;
    scanf("%d %d",&maxwei,&n);
    int overload=0;
    int peren=0;
    while(n>0){
        int perwei;
        scanf("%d",&perwei);
        if(maxwei>perwei){
            
            peren++;
            overload+=perwei;
            if(maxwei<overload){
                overload=1;
            }
            else{
            overload=0;
        }

        }
        
        n--;
    }
    printf("People Entered: %d\n",peren);
    if(overload){
        printf("Overload Status: yes");
    }
    else{
        printf("Overload Status: no");
    }
    return 0;
}