#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int c;
    scanf("%d",&c);
    int l=0;
    int i=0;
    while(i<n){
        int t;
        scanf("%d",&t);
        c+=t;
        if(c<2000){
            l++;
        }
        else{
            l=0;
        }
        i++;
    }
    printf("Final Balance: %d\n",c);
    printf("Low Balance Days: %d",l);

    return 0;
}