#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int first=a[0];
    int second=a[0];

    for(int j=0;j<n;j++){
        if(a[j]>first){
            second=first;
            first=a[j];
            

        }
    }
    printf("second largest: %d",second);
    return 0;
}