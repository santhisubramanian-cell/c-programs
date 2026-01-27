#include<stdio.h>
int main(){
    int plantype;
    scanf("%d",&plantype);
    float data;
    scanf("%f",&data);
    switch (plantype)
    {
    case 1:
        if(data<=1){
            printf("Normal Speed");
        }
        else if(data>1){
            printf("Speed Reduced");
        }
        break;
    case 2:
        if(data<=2){
            printf("Normal Speed");
        }
        else if(data>2){
            printf("Extra charges applied");
        }
    default:
        break;
    }

    return 0;
}