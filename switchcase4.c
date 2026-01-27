#include<stdio.h>
int main(){
    
    int class,age;
    scanf("%d %d", &class,&age);
    switch (class)
    {
    case 1:
        printf("Sleeper\n");
        if(age<12){
            int res = 300*0.50;
            printf("Fare: %d",300-res);
        }
        else if(age>=60){
            int res = 300*0.33;
            printf("Fare: %d",300-res);
        }
        break;
    case 2:
        printf("AC\n");
        if(age<12){
            int res = 1000*0.50;
            printf("%d",1000-res);
        }
        break;
    default:
        break;
    }

    return 0;
}