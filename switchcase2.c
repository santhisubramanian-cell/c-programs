#include <stdio.h>

int main() {
    int marks;
    scanf("%d",&marks);
    switch (marks/10)
    {
    case 9:
        if(marks>=90){
            printf("Grade: A");
        }
        break;
    case 7: case 8:
        if(marks>=75 && marks<=89){
            printf("Grade: B");
        }
        break;
    case 6:  
        if(marks>=60 && marks<=74){
            printf("Grade: C");
        }
        break;
    case 5:  
        if(marks>=50 && marks<59){
            printf("Grade: D");
        }
        break;
    case 4:  
        if(marks>=40 && marks<=49){
            printf("Grade: E");
        }
        break;
    case 3:  
        if(marks>=35 && marks<=39){
            printf("Grade: Supplementry");
        }
        break;
    case 2:  
        if(marks<35){
            printf("Grade: fail");
        }
        break;
    default:
        break;
    }
    
    
    return 0;
}