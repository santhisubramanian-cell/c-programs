#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int low,high,mid,target;
    scanf("%d",&target);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==target){
            printf("array value is found at index %d",mid);
            return 0;
        }
        else if(a[mid]>target){
            high=mid-1;
        }
        else{
           low=mid+1;
        }
    }
    printf("not found");
    return 0;

}