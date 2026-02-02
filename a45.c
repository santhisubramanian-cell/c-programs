#include<stdio.h>
int main(){
    int n,count;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        count=1;
        if(a[i]==-1){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                a[j]=-1;
            }
        }
        printf("%d %d\n",a[i],count);
    }
    return 0;
}