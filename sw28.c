#include<stdio.h>
int main(){
    int room;
    scanf("%d",&room);
    switch(room)
    {
    case 1:
        printf("Hostel Fee 80000");
        break;
    case 2:
        printf("Hostel Fee 60000");
        break;
    case 3:
        printf("Hostel Fee 45000");
        break;
    default:
        break;
    }
    return 0;
}