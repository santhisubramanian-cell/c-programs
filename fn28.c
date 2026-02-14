#include<stdio.h>
int search(int a[],int size,int target){
    for(int i=0;i<size;i++){
        if(a[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int target;
    scanf("%d",&target);
    int res=search(a,size,target);
    if(res==-1){
        printf("element is found at index %d",res);
    }
    else{
        printf("not found");
    }
    return 0;
}