#include<stdio.h> 

int main(){ 
    int r, c; 
    scanf("%d %d", &r, &c); 
    int a[r][c]; 
    for(int i = 0; i < r; i++){ 
        for(int j = 0; j < c; j++){ 
            scanf("%d", &a[i][j]); 
        } 
    } 
    int total = r * c; 
    int arr[total]; 
    int k = 0; 
        for(int i = 0; i < r; i++){ 
        for(int j = 0; j < c; j++){ 
            arr[k++] = a[i][j]; 
        } 
    } 
    for(int i = 0; i < total; i++){ 
        for(int j = i + 1; j < total; j++){ 
            if(arr[i] == arr[j]){ 
                printf("%d", arr[i]); 
                return 0; 
            } 
        } 
    } 
    return 0; 
}
