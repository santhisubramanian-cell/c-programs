#include<stdio.h>
int main(){
    int m, n, w, count = 0;
    int c = 0;
    int Overload = 0;
    scanf("%d",&m);
    scanf("%d",&n);
    while(count<n){
        scanf("%d",&w);
        if(c+w<=m){
            c+=w;
            count++;
        }
        else{
            Overload=1;
            break;
        }
    }
    printf("%d\n",count);
    if(Overload){
        printf("Yes");
    }
    else{
        printf("no");
    }
    return 0;
}
