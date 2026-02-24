#include<stdio.h>
int main(){
    int size;
    scanf("%d", &size); 
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    int target;
    scanf("%d", &target);
    int found = 0;
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] + arr[j] == target){
                printf("%d %d\n", arr[i], arr[j]);
                found = 1;
                break;
            }
            
        }
        if (found) {
            break;
        }
    }
    if (!found) {
        printf("No Pair\n");
    }

    return 0;
}

