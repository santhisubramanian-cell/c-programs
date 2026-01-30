#include<stdio.h>
int main(){
    int fuel;
    scanf("%d",&fuel);
    int n;
    scanf("%d",&n);
    int emergency=0;
    while(n>0){
        int fuelburn;
        scanf("%d",&fuelburn);
        if(fuel>fuelburn){
            fuel-=fuelburn;
            emergency++;
        }
        
        n--;
    }
    printf("%d\n",emergency);
    printf("%d",fuel);
    return 0;
}