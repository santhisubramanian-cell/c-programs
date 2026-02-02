#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int even_count=0;
    int odd_count=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    printf("even count: %d\n",even_count);
    printf("odd count: %d",odd_count);
    return 0;
}