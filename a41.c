#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int target;
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(a[i]==target){
            printf("array value found at index %d",i);
            return 0;
        }
    }
    printf("array value is not found");
    return 0;
}