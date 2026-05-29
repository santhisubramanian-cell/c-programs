#include<stdio.h>
int interest(int a, int b,int c){
    int d=a*b*c;
    float e=d/100;
    return e;

}


int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float total=interest(a,b,c);
    printf("%f",total);
    return 0;
}
