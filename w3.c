#include<stdio.h>
int main(){
    int total;
    scanf("%d",&total);
    int days;
    scanf("%d",&days);
    int i=0;
    int daysused=0;
    int c = total;
    while(i<days){
        int usage;
        scanf("%d",&usage);
        if(c>usage){
            c-=usage;
            daysused++;
        }
        else{
            break;
        }
        days--;

    }
    printf("%d\n",daysused);
    printf("%d",c);
    return 0;
}