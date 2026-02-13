#include<stdio.h>
int search(int a[],int s,int target){
    int *p=a;
    for(int i=0;i<s;i++){
        if(*(p+i)==target){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int s;
    scanf("%d",&s);
    int a[s];
    for(int i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    int target;
    scanf("%d",&target);
    int res=search(a,s,target);
    if(res==-1){
        printf("%d\n",res);
    }
    else{
        printf("%d",res);
    }
    return 0;
}