#include<stdio.h>
int main(){
    printf("1.Standard\n");
    printf("2.Deluxe");
    int room;
    scanf("%d",&room);
    char season;
    scanf("%c",&season);
    switch (room)
    {
    case 1:
        if(season == 'A'){
            printf("2500");
        }
        else if(season == 'B'){
            printf("2000");
        }
        break;
    case 2:
        if(season == 'C'){
            printf("4000");
        }
        else if(season == 'D'){
            printf("3000");
        }
    default:
        break;
    }

    return 0;
}