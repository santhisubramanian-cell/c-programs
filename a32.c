#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    int count_p=0;
    int count_n=0;
    int count_z=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            count_p++;
        }
        else if(a[i]<0){
            count_n++;
        }
        else{
            count_z++;
        }
    }    
printf("positive: %d\n",count_p);
printf("negative: %d\n",count_n);
printf("zero: %d\n",count_z);


return 0;
}