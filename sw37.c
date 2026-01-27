#include<stdio.h>
int main(){
    int ctype;
    scanf("%d",&ctype);
    switch(ctype)
    {
    case 1:
        printf("Certificate Fee 0");
        break;
    case 2:
        printf("Certificate Fee 500");
        break;
    
    default:
        break;
    }
    return 0;
}